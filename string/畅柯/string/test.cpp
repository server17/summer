#include"mystring.h"
int main()
{
    mystring s = "changkec" ;
    mystring ss = s ;
    
    cout << s << endl ;
    cout << s[1] <<endl;   
    cout<<s.substr(1,4)<<endl ; 

    mystring::iterator its;
    for(its = s.begin(); its != s.end(); ++its)
    {
        std::cout << *its << endl ;
    }
    cout << "00000000000000000000000" <<endl ;
    for(its = s.begin(); its != s.end(); its++)
    {
        std::cout << *its << endl ;
    }   

    

}
