#ifndef _TCP_CONNECTION_H_
#define _TCP_CONNECTION_H_
#include "Universal_head.h"
#include "EventLoop.h"
#include "Address.h"
// #include "Socket.cc"
#include "Channel.h"
#include "Buffer.cc"
#include "webResponse.h"
// class Buffer;
class TcpConnection : 
            public boost::enable_shared_from_this<TcpConnection>
{
    public:     
        TcpConnection(EventLoop *loop,const std::string name,int sockfd,
                              const Address &localAddr,const Address &peerAddr) 
                        :loop_(loop),
                        reading_(false),
                        name_(name),
                        socket_(new Socket(sockfd)),
                        channel_(new Channel(loop,sockfd)),
                        localAddr_(localAddr),
                        peerAddr_(peerAddr) 
        {
            channel_->setReadCallBack(
                std::bind(&TcpConnection::handleRead,this));
            channel_->setWriteCallBack(boost::bind(&TcpConnection::handWrite,this));
            channel_->setCloseCallBack(boost::bind(&TcpConnection::handClose,this));
            channel_->setErrCallBack(boost::bind(&TcpConnection::handClose,this));

        }
        void setConnectionCallBack(ConnectionCallBack &cb) {
            connectionCallBack_ = cb;
        }
        void setMessageCallBack(const MessageCallBack &cb) {
            messageCallBack_ = cb;
        }
        void setCloseCallBack(const CloseCallBack &cb) {
            closeCallBack_ = cb;
        }
        const string & getName() { return name_; }
        bool isConnected() { return state_ == Connected; }
        bool isDisconnected() { return state_ == Disconnceted; }
        void send(const std::string& message);
        void send(Buffer *buffer);
        void shutdown();
        void startRead();
        bool reading() { return reading_; };
        void stopRead();
        void connectEstablished();
        EventLoop* getLoop() { return loop_;}
        void handClose();
        void connectionClose();
        void setRequest(std::shared_ptr<webRequest>request) { 
            request_ = request;
        }
        std::shared_ptr<webRequest> getRequest()  { return request_; }
    private:
        enum State { Connecting,Connected,Disconnecting,Disconnceted};
        EventLoop *loop_;
        bool reading_;
        std::string name_;
        State state_;
        boost::scoped_ptr<Socket> socket_;
        boost::scoped_ptr<Channel> channel_;
        Address localAddr_;
        Address peerAddr_;
        ConnectionCallBack connectionCallBack_;;
        MessageCallBack messageCallBack_;
        CloseCallBack closeCallBack_;
        Buffer inputBuffer_;
        Buffer outputBuffer_;
        std::shared_ptr<webRequest>request_;   
        // ErrCallBack errCallBack_;
        void setState(State s) { state_ = s;}
        void handleRead();
        void handWrite();
        void sendInLoop(const std::string& message);
        // void Shutdown();
        void shutdownInLoop();
        void startReadInLoop();
        void stopReadInLoop();
        

      
};
#endif