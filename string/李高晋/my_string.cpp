#include "my_string.h"

std::ostream& operator<<(std::ostream &out, const String &str)
{
    out<<str.m_data;
    return out;
}
std::istream& operator>>(std::istream &in,String& str)
{
    in>>str.m_data;
    return in;
}
inline 
String::String(const char* cstr)    //这里写成(const char* cstr = 0)会报错
{
    if(cstr){
        m_data = new char[strlen(cstr)+1];
        strcpy(m_data,cstr);
    }
    else{  //未指定初始值
        m_data = new char[1];
        *m_data = '\0';
    }
}
inline   //???????作用？
String::String(const String &str)
{
    m_data = new char[strlen(str.m_data)+1];
    strcpy(m_data,str.m_data);
}

inline
String::~String()
{
    delete[] m_data;
}

inline
String String::operator+(const String &str)
{
    strcat(m_data,str.m_data);  //strcat可能会导致溢出
    return *this;
}
String String::operator+=(const String& str)
{
    m_data = new char[sizeof(m_data)+1];
    strcat(m_data,str.m_data);
    return *this;
}
char& String::operator[](int index)
{
    return m_data[index];
}
bool String::operator==(String& str)
{
    if(strcmp(m_data,str.m_data)==0)
        return true;
    return false;
}
bool String::operator!=(String& str)
{
    if(strcmp(m_data,str.m_data)!=0)
        return true;
    return false;
}


bool String::operator>(String &s)   //s1 > s2
{
    if(strcmp(m_data,s.m_data)>0)
        return true;
    return false;
}
 
bool String::operator<=(String &s)
{
    if(strcmp(m_data,s.m_data)>=0)
        return true;
    return false;
}
 
bool String::operator<(String &s)
{
    if(strcmp(m_data,s.m_data)<0)
        return true;
    return false;
}
 
bool String::operator>=(String &s)
{
    if(strcmp(m_data,s.m_data)<=0)
        return true;
    return false;
 
}
int MyString::length()
{
    return m_temp;
}
MyString &MyString::swap(const char *p)
{
   char p_test[100];
   int size = strlen(p);
   strcpy(p_test,test);
   p_test[size] = '\0';
   strcpy(temp,p_test);
   return * this;
}
MyString & MyString::swap(const String &s)
{
    char p_test[100],g_test[100];
    int size = strlen(s.temp);
    strcpy(p_test, s.temp);
    strcpy(g_test,temp);
    p_test[size] = '\0';
    g_test[m_temp] ='\0';
    strcpy(temp, p_test);
    strcpy(s.temp,g_test);
    return *this;
}
     
/*
inline
String String::operator=(const String &n_str)
{
    if(*this!=&n_str)//如果不是自复制
    {
        delete []m_data;
        n_str=new char[strlen(n_str.m_data)+1]; //这里使用sizeof还是strlen
        strcpy(m_data,n_str.m_data);
    }
    return *this;
}
*/
