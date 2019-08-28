#ifndef _ACCEPT_H_
#define _ACCEPT_H_
#include "model.h"
#include "EventLoop.h"
#include "Channel.h"
#include "Socket.cc"
#include "Buffer.cc"
// #include "SocketOpts.cc"
// #include "InetAddress.h"
class InetAddr;

class Accept : public std::enable_shared_from_this<Accept>{
    public:
        typedef std::function<void(int sockfd,
                                       const Address &)> NewConnectionCallBack;
        typedef std::function<void(const AcceptorPtr)> ConnecttionCallBack;
        typedef std::function<void(const AcceptorPtr&conn,
                                        Buffer *buf,ssize_t len)> MessageCallBack;
       
        typedef std::function<void()> CloseCallBack;

        Accept(EventLoop* loop,const Address&);
        
        void NewConnection(int sockfd,const Address& peeraddr) {
            std::cout << peeraddr.toIpPort() << std::endl;
            addr_ = peeraddr;
            // setConnectionCallBack(connectioncallback_);
            // setMessageCallBack(messagecallback_);
            setCloseCallBack(std::bind(&Accept::handleClose,this));
            setState(Connected);
            channelAccepted_->setSockfd(sockfd);
            channelAccepted_->enableReading();
            // setacceptedChannel(std::make_shared<Channel>(loop_,sockfd));

        }
        std::string getSocketInfo() {
            return addr_.toIpPort();
        }
        void setNewConnectionCallBack(const NewConnectionCallBack &cb) {
            newconnectioncallback_ = cb;
        }
        void setConnectionCallBack(const ConnecttionCallBack &cb) 
        { connectioncallback_ = cb; }
        void setMessageCallBack(const MessageCallBack &cb)
        { messagecallback_ = cb; }
        void setCloseCallBack(const CloseCallBack &cb)
        { closecallback_ = cb; } 
        void removeChannel() { std::bind(&Accept::handleClose,this); }
        bool listening() { return listening_; }
        void listen();
        void send(const std::string &message);
    private:
        enum State {Connecting, Connected, disConnected, disConnecting};
        // void setacceptedChannel(const std::shared_ptr<Channel> &channelAccepted) {
        //     setState(Connected);
        //     channelAccepted_ = channelAccepted;
        //     // channelAccepted_->setReadCallback(std::bind(&Accept::handleRead,this));
        //     //Add a socket to the epoll structure to start listening
        //     channelAccepted_->enableReading();
        //     std::cout << "Getsockfd: " << channelAccepted_->getSockfd() << std::endl;
        // }
        void handleEstablishRead();
        void handleRead();
        // void send(const std::string &message);
        void sendInLoop(const std::string &messages);
        void shutdown();
        void shutdownInLoop();
        void handleWrite();
        void handleClose();
        State state_;
        void setState(State state) { state_ = state; }
        EventLoop* loop_;
        Socket acceptSocket_;
        Channel acceptChannel_;
        std::shared_ptr<Channel> channelAccepted_;
        NewConnectionCallBack newconnectioncallback_;
        ConnecttionCallBack connectioncallback_;
        MessageCallBack messagecallback_;
        CloseCallBack closecallback_;
        bool listening_;
        Address addr_;
        Buffer input_;
        Buffer output_;
};
#endif