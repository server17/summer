#include "cmdProcess.h"

//将结果集返回
int cmdProcess :: findCmd(const shared_ptr<Command>tmp) {
    pair<string, vector<string>>t;
    string cc = tmp->cmd() ;
    int ret = cmdSet_->findCmd() ;
    return ret ;
}

//处理消息
int cmdProcess :: processMsg(shared_ptr<aeEvent>&tmp) {

    buffer* bf = tmp->getBuf() ;
    //获取到对端序列化的结果
    string* buff = bf->getBuf() ;
    //获取对端序列化到结果
    //反序列化,弱引用
    shared_ptr<Command>wcmd = rc->getParseString(*buff) ;
    //获取到相应的智能指针后，进行解析
    int ret = findCmd(wcmd) ;
    Response res ;
    //解析命令不合法
    if(ret == NOTFOUND) {
        //给客户端发送处理结果
        //序列化，并向客户端发送消息，暂时不做处理
        res = backInfo :: notFind() ;
    }   
    else {
        //处理命令
        string cc = wcmd->cmd() ;
        int num = wcmd->num() ;
        //获取当前所在数据库
        //shared_ptr<redisDb> tmp = cmdSet_.getDB(num) ;
        //没找到
        int ret = cmdSet_->redisCommandProc(num, wcmd) ;
        //传入的键值不合法
        if(ret == NOTFOUND) {
        } 
        if(ret == KEYINVALID) {
            res = backInfo :: keyInvalid() ;
        }
        if(ret == SUCESS) {
            res = backInfo :: okReply() ;
        }
        if(ret == PROCESSERROR) {
            res = backInfo::processError() ;
        }   
    } 
    shared_ptr<Response>re(&res) ;
    rc->response(res, tmp->getConnFd()) ;
    //获取到响应的结果
     
/*    Command cmd = parseString(*buff) ;
    //对照命令表
    string co = cmd.cmd() ;
    //键值
    string key = cmd.key() ;    
    //获取key后面的部分
    getAfterKeyPart() ;
    int size = cmd.vals_size() ;
    //获取key以后的部分
    for(int i=0; i<size; i++) {
        Value vals = cmd.vals(i) ;
        int len = vals.val_size() ;
        for(int j=0; j<len; j++) {
            lastKey.push_back(vals.val(j)) ;  
        }
    }
    //findCommand
    int res = findCommand(cmd) ;
    if(res == 0) {
        int ret = sendMsg(tmp) ;   
        if(ret < 0) {
            return -1;
        }
    }*/
}

int cmdProcess :: sendMsg(shared_ptr<aeEvent>tmp) {
    int fd = tmp->getConnFd() ;
    Command cmd ;
    char buf[SIZE] ;
    cmd.set_status(0) ;
    int ret = write(fd, buf, sizeof(buf)) ;
    if(ret < 0) {
        cout << __FILE__ << "     " << __LINE__ << endl ;
        return -1 ;
    }
    return 1 ;
}
