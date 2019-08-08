- 网络库的封装借鉴了muduo的设计，使用了新的系统调用，例如非阻塞的accept4，使用了C++的一些新特性。目前还没有加入多线程。

- web服务器模块利用状态机解析http包头，采用了内存映射读取文件。其他细节会慢慢优化。实现了基本的get、post请求，可以利用FastCGI实现对动态网页的解析
  
  - 其中web服务器用到主要实现文件由主函数 web.cc、请求分析函数webRequest.cc 请求回复函数webResponse.cc、设置相应的回调函数Server.cc
  
  - 使用方法： **make** 后会生成Server文件 **./Server** 便可。
