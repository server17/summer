#pragma once
#include<string.h>
#include<strings.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

class mystring
{
    friend ostream&operator<<(ostream&out,const mystring&s);
    friend istream&operator>>(istream&in,mystring&s);

private:
    char *p;

public:
    int len;
    class iterator ;
    mystring();
    mystring(const char *s);
    mystring(mystring const&s);
    ~mystring();

public :
    char operator[](const int i);
    mystring& operator=(const mystring&s);
    mystring& operator=(const char * s);
    bool operator==(mystring const&s);
    bool operator==(const char *s);
    mystring& operator+=(const char*s) ;
    mystring& operator+=(mystring const s) ;
    bool operator!=(const char *s);
    bool operator!=(const mystring&s);
    bool operator<(const mystring&s);
    bool operator<(const char *s);
    bool operator>(const mystring &s);

public :
    char* c_str() ;
    int length();
    bool operator>(const char *s);
    int indexof(const char& s);
    int lastIndexOf(const char &s);
    char* substr(int start, int  end);
    char* substr(int start) ;
    char* data();

public :
    iterator  end()const 
    {
        if(this->len == 0)
        {
            throw exception() ;
        }

        int len = strlen(this->p) ;
        return iterator(this, len) ;
    }

    iterator begin()const
    {
        if(this->len == 0)
        {
            throw exception() ;
        }
        int s = 0 ;
        iterator its = iterator(this, s) ;
        return its ;
    }
   /* 
    void erase(iterator& its)
    {
    
        if(its.index < 0||its.index > len)
        {
            throw exception() ;
        }
        
        if((size_t)its.index == strlen(its.it->p))  
        {
            iterator* temp = new iterator();
            *(temp->it) += this->substr(0, its.index);
            *(temp->it) += this->substr(its.index+1) ;
                           
            its = *temp ;
            p[its.it->len-1]='\0' ;
        }
            
        else
        {
            cout << len <<endl ;
            for(int i=its.index; i<len; i++ ) 
            {
                p[i] = p[i+1] ;
                its.index--;
            }
        }
    }
  */
public :
    //迭代器
    class iterator{

    public : 
        mystring* it;
        int index ;

    public :
        
        iterator(){ it = new mystring() ; index = 0 ;}
        
        iterator(const mystring* str, int i)
        {
            if(i > str->len || i < 0)
            {
                throw exception() ;
            }
            it = new mystring(*str) ;
            it->len = str->len ;
            this->index = i ;
        }
        
        ~iterator()
        {
            delete it ;
            it = NULL ;
            index = 0 ;
        }
    
    public :
        
        bool operator==(iterator const its)
        {
            if(its.index == this->index&&its.it == this->it)
            {
                return true ;
            }
            return false ;
        }
            
        //此处记一坑
        //返回值为迭代器引用并不是迭代器对象！！！
        iterator& operator=(iterator const s)
        {   
            if(s.it == NULL)
            {
                throw exception();
            }
                
            this->index = s.index ;
            this->it = new mystring(*(s.it)) ;
            return *this ;
        }
        
        iterator& operator --()
        {   
            if(it->len < 0)
            {
                throw exception() ;
            }

            else
            {
                this->index -- ;
                return *this  ;
            }
        }
        
        bool operator!=(iterator s)
        {
            return this->index == s.index?false:true ;
        }

        //i++操作 
        void operator++()
        {
            
            if(it->len-1 == this->index)
            {
                throw exception() ;    
            }
            ++this->index ;
        }

        //++i操作
        void operator++(int i)
        {
            i = 1 ;
            if(strlen(this->it->p) < (size_t)this->index)
            {
                throw exception() ;
            }

            this->index += i ;
        }

        char operator*()
        {
           if(it == NULL)
            {
                throw exception() ;
            }
            
            return this->it->p[index];
        }
    };
};

mystring& mystring::operator+=(mystring const s)
{
    if(s.len == 0)
    {
        return *this ;
    }
    else
    {
        char* q = new char[strlen(s.p)+strlen(p)+1] ;
        strcpy(q, p);
        strcat(q, s.p) ;
        free(p) ;
        p = new char[strlen(q)+1];
        strcpy(p, q) ;
        free(q) ;
        return *this ;
    }
}

char* mystring:: c_str()
{
    return p ;
}

int mystring::lastIndexOf(const char& s){
    
    if(len==0){
        return -1;
    }
    for(int i=len-1;i>=0;i--){
        if(p[i]==s)return i;
    }
    return -1;
}

int mystring::length(){
    return len;
}

mystring& mystring::operator+=(const char*s)
{
    if(p == NULL)
    {
        return *this;
    }
    else
    {
        char * q= new char[strlen(s)+strlen(p)+1];
        strcpy(q, p);
        strcat(q, s);
        free(p);
        p = new char[strlen(s)+1] ;
        strcpy(p,s) ;
        len = strlen(p);
        free(q) ;
    }
    return *this ;
}

int mystring::indexof(const char&s){
    for(int i=0;i<len;i++){
        if(p[i]==s){
            return i;
        }
    }
    return -1;
}

bool mystring::operator!=(const mystring&s){
    return strcmp(p,s.p)?true:false;
}

bool mystring ::operator!=(const char*s){
    return strcmp(p,s)?true:false;
}

bool mystring::operator<(const mystring&s){
    if(strcmp(p,s.p)<0){
        return true;
    }
    else{
        return false;
    }
}

bool mystring::operator<(const char*s){ 

    if(strcmp(p,s)>0){
        return false;
    }
    else{
        return true;
    }
}

bool mystring::operator>(const mystring&s){
    
    if(strcmp(p,s.p)>0){
        return true;
    }
    else{
        return false;
    }
}

bool mystring::operator>(const char*s){
    if(strcmp(p,s)>0){
        return true;
    }
    return false;
}
char * mystring::data(){
    return p;
}

bool mystring ::operator==(const mystring&s){
    
    return strcmp(p,s.p)?0:1;
}

bool mystring::operator==(const char *s){
    return strcmp(p,s)?0:1;
}

char mystring::operator[](const int i){
    
    if(i>len){
        cout<<"out of index"<<endl;
        exit(1);
    }
    else{
        return p[i];
    }
}

ostream&operator<<(ostream& out,const mystring &s){
    out<<s.p;
    return out;
}

istream&operator>>(istream&in,mystring &s){

    cin>>s.p;
    return in;
}
mystring ::mystring(){
    
    len = 0 ;
    p = new char[len+1];
    strcpy(p,"");
}
mystring::~mystring(){

    len = 0; 
    delete[]p;
    p =NULL;
}
mystring& mystring::operator=(mystring const&s){
    
    len = s.len ;
    p = new char[len+1];
    strcpy(p,s.p);
    return *this;
}

mystring& mystring::operator=(const char *s){

    if(!strcmp(s,"")||s==NULL){
        len = 0 ;
        p = new char[len+1];
        strcpy(p,"");
    }

    else{
        len = strlen(s);
        p = new char[len+1];
        strcpy(p,s);
    }

    return *this;
}

char* mystring :: substr(int start, int end)
{   

    if((end-start) < 0|| end > len)
    {
        return NULL ;
    }

    char *q ; 
    q = (char* )malloc (end-start+3);
    strncpy(q, p+start, end-start) ;
    return q ;
}

char* mystring ::  substr(int start)
{   
    if(start < 0 || start > len)
    {
        throw exception() ;
    }   
    return p+start ;
}

mystring::mystring(const char*s){

    if(!strcmp(s,"")||s==NULL){
        len = 0 ;
        p = new char[len+1];
    }
    else{
        len= strlen(s);
        p = new char[len+1];
        strcpy(p,s);
    }
}

mystring :: mystring(mystring const& s)
{
    if(s.len == 0)
    {
        p = NULL ;
    }
    int len = strlen(s.p) ;
    p = new char[len+1] ;
    strcpy(p, s.p) ;
}
