#ifndef __MYSTRING__
#define __MYSTRING__

//using namespace std;

#include<iostream>
#include<cstring>
class String
{
//友元
    friend std::ostream& operator<<(std::ostream &out,const String &s);
    friend std::istream& operator>>(std::istream &in,String &s);
public:
    //构造与析构
    String(const char* cstr = 0);
    String(const String& str);
    ~String();

    //运算符重载
  //  String& operator=(const String& str);
    String operator+(const String& n_str);
    String operator+=(const String& str);
    char& operator[](int index);
    bool operator==(String& str);
    bool operator!=(String& str);
    bool operator>(String &s);   //s1 > s2
    bool operator<=(String &s);
    bool operator<(String &s);
    bool operator>=(String &s);

    char* get_c_str() const {return m_data;};
    
private:
    char* m_data;
};

#endif