#pragma once
#include <functional>
#include "EventLoop.h"
#include "Acceptor.h"
#include "TcpConnection.h"
#include "EventLoopThreadPool.h"
class TcpServer
{
public:
    typedef std::shared_ptr<TcpConnection> TcpConnectionPtr;
    typedef std::function<void (std::shared_ptr<TcpConnection>)> ConnectionCallback;
    typedef std::function<void (const TcpConnectionPtr&,Buffer*,size_t)> MessageCallback;

    TcpServer(EventLoop *loop,int port,std::string namearg);
    ~TcpServer();

    void start();

    void setConnectionCallback(const ConnectionCallback &cb) {
        connectionCallback = cb;
    }
    void setMessageCallback(const MessageCallback &cb) {
        messageCallback = cb;
    }
    void setwriteCompleteCallback(const TcpConnection::writeCompleteCallback &cb) {
        writeCompleteCallback_ = cb;
    }
    void setThreadNum(int threadNum) {
        threadpool->setThreadNum(threadNum);
    }
private:
    
    void NewConnection(int sockfd,struct sockaddr_in addr);
    typedef std::map<std::string,TcpConnectionPtr> ConnectionMap;
    void removeConnction(const TcpConnectionPtr &conn);
    void removeConnctionInLoop(const TcpConnectionPtr &conn);

    EventLoop *loop;
    std::string name;
    std::unique_ptr<Acceptor> acceptor;
    ConnectionCallback connectionCallback;
    MessageCallback messageCallback;
    TcpConnection::CloseCallback closeCallback;
    TcpConnection::writeCompleteCallback writeCompleteCallback_;
    
    bool started;
    int nextConnId;
    ConnectionMap connections;
    std::unique_ptr<EventLoopThreadPool> threadpool;

};

