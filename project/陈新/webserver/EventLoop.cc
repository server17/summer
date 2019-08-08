#include "EventLoop.h"
#include "Channel.cc"
#include "Poller.cc"
int kPollTimeMs = 5*1000;
void EventLoop::loop() {
    assert(!looping_);
    looping_ = true;
    quit_ = false;
    while(!quit_) {
        activeChannels_.clear();
        poller_->poll(-1,&activeChannels_);
        eventHanding_ = true;
        for(ChannelList::iterator it = activeChannels_.begin();
            it != activeChannels_.end();it++) {
                (*it)->handleEvent();
            }
        eventHanding_ = false;
    }
    std::cout << "Event is going to be Stoped" << std::endl;
    looping_ = false;
}
void EventLoop::updateChannel(Channel * channel) {
    assert(channel->owerLoop() == this);
    poller_->updateChannel(channel);
}
void EventLoop::quit() {
    quit_ = true;
}
void EventLoop::runInLoop(const CallBack &cb) {
    cb();
}
void EventLoop::removeChannel(Channel * channel_) {
    assert(channel_->owerLoop() == this);
    if(eventHanding_) {
        assert(std::find(activeChannels_.begin(),activeChannels_.end(),channel_) == activeChannels_.end());
    }
    poller_->removeChannel(channel_);
}
EventLoop::~EventLoop() {
    std::cout << "~EventLoop begin" << std::endl;
}
void EventLoop::queueLoop(lifeCycle cb) {
    pendingEvent_.push_back(std::move(cb));
}