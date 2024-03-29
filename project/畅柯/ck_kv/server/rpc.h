#pragma once
#include <iostream>
#include <memory>
#include <functional>
#include "aeEvent.h"
#include "msg.pb.h"

using namespace Messages ;
using namespace std ;

class rpc ;

///反序列化
shared_ptr<Command>requestMethod(string* s) {
    Command cmd ;
    cmd.ParseFromString(*s) ;   
    shared_ptr<Command>comm(&cmd) ;
    return comm ;
}

class rpc {
    typedef function<void(shared_ptr<Response>res, int fd)> request ;
    typedef function<shared_ptr<Command>(string*)> parse ;
public:
    rpc() {
        cmd = make_shared<Command>() ;
        parseMethod = requestMethod ;
    }
    ~rpc() {}
public :
    shared_ptr<Command>getParseString(string* buff) ;
    int response(shared_ptr<Response>res, int fd) ;
    //设置相应的callMethod方法
    ///:void setCallMethod(request cb) { requestMethod = move(cb); }   
    //反序列化函数
    void setCallMethod(parse par) { parseMethod = move(par) ;}
private : 
    shared_ptr<Command>cmd ;
 //   request requestMethod ;
    //反序列化函数
    parse parseMethod ;   
    int a ;
};

