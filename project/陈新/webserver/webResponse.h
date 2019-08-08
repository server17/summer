#ifndef _RESPONSE_H_
#define _RESPONSE_H_
#include <sys/mman.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <iostream>
#include <string>
// #include "Buffer.h"
#include "TcpConnection.h"
#include "TcpServer.h"
#include "disCription.h"
#include "webRequest.h"
// #include "FastCGI/FastCGI.h"
const std::string Version = "HTTP/1.1";

class webResponse : public disCription {
 public:
  const std::string Ok = "ok";
  const std::string _400 = "Bad Requeest";
  const std::string _403 = "Forbidden";
  const std::string _404 = "Not Found";
  const std::string _500 = "Internal Error";
  HttpCode requestAction(void);
  // bool fileResponseWrite(const TcpConnectionPtr &conn_,Buffer*buffer_);
  void fileResponseAddHead(Buffer *buffer_, int length_);
  void fileResponseAddHead(Buffer *buffer_, std::string &cgiReply_);
  bool fileResponseAssembly(Buffer *buffer_, FastCGI &fastcgi);
  void setHttpCodeStatus(HttpCode &status) { httpcodestatus_ = status; }
  std::string getFileType();
  ~webResponse() {
    // int i = 1;
    // while (count_) {
    //   munmap(fileAddr, BuffSize);
    //   count_--;
    //   if(i-- == 1)
    //      flagsAddr -= tail_;
    //   flagsAddr -= BuffSize;
    // }
    if (fileAddr) munmap(fileAddr, st_.st_size);
    flagsAddr = NULL;
  }
  static char *fileAddr;
  static char *flagsAddr;
  static int count_;
  static int tail_;

 private:
  webRequest request_;
  // Buffer buffer_;
  // TcpConnection conn_;
  char buf_[64];
  HttpCode httpcodestatus_;
  std::string title_;
  FastCGI fastcgi_;
  std::string cgiStatus_;
  std::string cgiContentType_;
  std::string cgiContent_;
};
char *webResponse::fileAddr = NULL;
char *webResponse::flagsAddr = NULL;
int webResponse::count_ = 0;
int webResponse::tail_ = 0;
#endif