#include "aeEventloop.h"
#include <stdlib.h>
//初始化事件
//创建epoll句柄等工作
aeEventloop :: aeEventloop() {
    maxFd = -1 ;
    setSize = -1 ;
    stop = false ;
    //刚开始创建16个数据库
   // db.reserve(16) ;
    //创建一个epoll对象
    aep = make_shared<aeEpoll>() ;
    aep->epCreate(SIZE) ;
    apiData = NULL ;
}

//添加监听套接字，及注册相应的读回调函数
int aeEventloop :: addServerEvent(string addr, string port) {
    //将相应套接字加入到epoll中
    shared_ptr<aeEvent> ae  = make_shared<aeEvent>() ; 
    //先获取套接字对象
    aeSocket *aeSock = ae->getSocket() ;  
    //创建套接字对象
    int servFd = aeSock->anetCreateSocket() ;
    //将监听套接字保存单独容器中
    listenFd.push_back(servFd) ;
    //绑定端口地址并进行监听
    aeSock->tcpServer(port.c_str(), addr.c_str(), 20) ;
    //设置非阻塞
    aeSock->setNoBlocking(servFd) ;
    //将该描述符加入到epoll中
    int ret = aep->add(servFd, READ) ;
    if(ret < 0) {
        return -1 ;
    }
 /*   //接收套接字的回调函数
    auto func = bind(&aeSocket::acceptClient, aeSock) ;
    //设置服务端读回调函数
    ae->setReadCallBack(func) ;*/
    //将事件加入到map中
    eventData[servFd] = ae ;
    return 1 ;
}   

//开始监听事件
int aeEventloop :: start() {
    while(!stop) {
        int ret = aep->wait(fireList) ;
        if(ret < 0) {
            return -1 ;
        }
        int len = fireList.size() ;
        for(int i=0; i<len; i++) {
            int fd = fireList[i].data.fd ;
            //设置epoll_event
            eventData[fd]->setEvent(&fireList[i]) ;
            aeProcessEvent(fd) ;
        }
        fireList.clear() ;
    }
    return 1 ;
}

//处理事件
int aeEventloop :: aeProcessEvent(int fd) {

    epoll_event* ev = eventData[fd]->getEvent() ;
    if(ev->events&READ) {
        //如果找a到fd就退出
        auto find = [&]()->int {
            int ret = 0 ;
            int len = listenFd.size() ;
            for(int i=0; i<len; i++) {
                if(fd == listenFd[i]) {
                    ret = 1 ;
                    break ;
                }
            }
            return ret ;
        };
        //该fd要是能在监听套接字中找到，新事件
        if(find() == 1) {
            int ret = acceptNewConnect(fd) ;
            if(ret < 0) {
                return 0 ;
            }
        }
        //其他可读事件
        else {
            int ret = eventData[fd]->processRead() ; 
            //收到处理失败
            //读到０表示退出
            if(ret == 0) {
                //持久化该客户端的数据
                aep->del(fd) ;
                //从eventData删除fd对应的对象
                map<int, shared_ptr<aeEvent>>::iterator ls= eventData.find(fd) ;
                ///删除相应的数据               
                eventData.erase(ls) ;
            }
        }
    }
    else if(ev->events&WRITE) {
        int ret = eventData[fd]->processWrite()  ; 
        if(ret < 0) {
            return -1 ;
        }
    }
    return 1 ;
}

int aeEventloop :: acceptNewConnect(int fd) {
    //接收新连接
    int newFd = eventData[fd]->getSocket()->acceptClient() ;
    if(newFd < 0) {
        cout << __FILE__ <<  "       " << __LINE__ << endl ;
        return -1 ;
    }
    //创建相应的aeEvent事件
    //设置度写回调函
    shared_ptr<aeEvent>tmp = make_shared<aeEvent>() ;
    //设置数据库号码，刚开始是０号数据库
    tmp->setNum(0) ;
    //设置事件非阻塞
    tmp->setNoBlock(newFd) ;
    //加入到事件列表
    eventData[newFd] = tmp ;
    tmp->setReadCallBack(readCall) ;
    tmp->setWriteCallBack(writeCall) ;
    tmp->setConnFd(newFd)  ;
    tmp->setServFd(fd) ;
    //将事件加入到epoll中
    aep->add(newFd, READ) ;
    return 1 ;
}

//在服务器启动的时候执行,设置回调函数
void aeEventloop :: setCallBack(callBack readCb, callBack writeCb) {
    //设置callback函数
    readCall = readCb ;
    writeCall = writeCb ;
}

aeEventloop :: ~aeEventloop() {
      
}
