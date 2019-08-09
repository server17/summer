#include "http/HttpServer.h"
#include "http/HttpRequest.h"
#include "http/HttpResponse.h"
#include "net/EventLoop.h"


#include <iostream>
#include <map>



int main(int argc, char* argv[])
{
  EventLoop loop;
  HttpServer server(&loop, InetAddress(8000));
  server.start();
  loop.loop();
}
