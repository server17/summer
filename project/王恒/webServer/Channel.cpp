#include "Channel.h"
#include "EventLoop.h"
const int Channel::kNoneEvent = 0;
const int Channel::kReadEvent = POLLIN | POLLPRI;
const int Channel::kWriteEvent = POLLOUT;

Channel::Channel(EventLoop *loop,int fd)
   :loop_(loop),
    fd_(fd),
    events_(0),
    revents_(0),
    index_(-1)
{
}

void Channel::update()
{
    loop_->updateChannel(this);    
}


void Channel::handleEvent()
{ 
    printf("Channel:handleEvent() fd:%d\n",fd_);
    if(revents_ & POLLHUP && !(revents_ & POLLIN)) {
        printf("closeCallback\n");
        if(closeCallback)
            closeCallback();
    }

    if(revents_ & POLLNVAL) {
    }


    if(revents_ & (POLLERR | POLLNVAL)) {
        printf("errorCallback\n");
        if(errorCallback) 
            errorCallback();
    }
    
    if(revents_ & (POLLIN | POLLPRI | POLLRDHUP)) {
        if(readCallback) {
            printf("readCallback\n");
            readCallback();
        }
    }
    
    if(revents_ & POLLOUT) {
        printf("writeCallback\n");
        if(writeCallback)
            writeCallback();
    }
}


void Channel::remove()
{
    loop_->removeChannel(this);
}

