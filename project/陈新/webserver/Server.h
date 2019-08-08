#ifndef _SERVER_H_
#define _SERVER_H_
#include <iostream>
#include "Address.cc"
#include "EventLoop.cc"
#include "SocketOpts.cc"
#include "TcpConnection.cc"
#include "TcpServer.cc"
#include "Universal_head.h"
#include "disCription.h"
#include "webRequest.cc"
#include "webResponse.cc"
class Server {
 public:
  typedef std::function<void(const webRequest &)> webCallBack;

  Server(EventLoop *loop, const Address &addr, const string &name);

  void setCallBack(const webCallBack &cb) { webcallback_ = cb; }
  void start() { server_.start(); }

 private:
  void onConnection(const TcpConnectionPtr &conn);
  void onMessage(const TcpConnectionPtr &conn, Buffer *buf);
  void onRequest(const TcpConnectionPtr &, disCription::HttpCode &status,
                 FastCGI &fastcgi_);
  TcpServer server_;
  webCallBack webcallback_;
  EventLoop *loop_;
  FastCGI fastcgi_;
};

#endif