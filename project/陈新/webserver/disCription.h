#ifndef _DISCRIPTION_H_
#define _DISCRIPTION_H_
#include <iostream>
#include <string>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
// #include "FastCGI/FastCGI.cc"
class disCription {
    public:
        enum Method { GET = 0,POST,HEAD,PUT };
        enum CheckState { CheckStateRequestLine= 0,
                           CheckStateHeader,
                           CheckStateContent };
        enum HttpCode { NoRequest, GetRequest, BadRequest,
                         NoResource, ForbidenRequest, FileRequest,
                         DirRequest,InternalError,ClosedConnection };
        enum LineStatus { LineStatusOk,LineStatusBad,LineStatusOpen };

        const std::string defaultFilePath = "/home/insect";
        std::string filePath;
        static std::string filename_;
        bool link_ = false;
        static struct stat st_;
        static std::string cgiReply_;
        const int BuffSize = 4096;
};
struct stat disCription::st_;
std::string disCription::filename_ = std::string();
std::string disCription::cgiReply_ = std::string();
// std::string disCription::status_ = std::string();
// std::string disCription::cgiContentType_ = std::string();
// std::string  disCription::cgiContent_ = std::string();
#endif