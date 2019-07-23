#include <iostream>
#include <string>
#include <vector>
#include <string.h>
using namespace std;

// //传入首位指针
// void Bubble_sort(int *begin, int *end)
// {
//     for(auto p1 = begin; p1 != end; ++p1)
//     {
//         for(auto p2 = begin; p2 != endl-1; ++p2)
//         {
//             if(*p2 > *(p2+1))
//             {
//                 int val_temp = *p2;
//                 *p2 = *(p2+1);
//                 *(p2+1) = val_temp;
//             }
//         }
//     }
// }
// //对函数重载，传入一对迭代器，同时进行第一次改进
// void Bubble_sort(vctor<int>::iterator begin, vector::iterator end)
// {
// int flag= 0;
// 	for (auto p1 = begin; p1 != end; ++p1)
// 	{
// 		flag = 0;
// 		for (auto p2 = begin; p2 != end-1; ++p2)
// 		{
// 			if (*p2 > *(p2+1))
// 			{
// 				int val_temp = *p2;
// 				*p2 = *(p2+1);
// 				*(p2+1) = val_temp;
// 				flag = 1;//表示此轮循环进行了交换				
// 			}
// 		}
// 		if (flag == 0)//上一轮循环中未进行交换，直接跳出
// 		{
// 			break;
// 		}
// 	}
// }
class A{
public:
    typedef char* iterator;
};

char* end(char* p)
{
    int i=0;
    while(p[i]!='\0')
        i++;
        char *q= &p[i];
    return(q);
}
int main(int argc, char const *argv[])
{
    string s1 = "agghjkllll";
    cout<<s1<<endl;
   
    char *p;
    p=(char*)malloc(sizeof(char)*10);
    strcpy(p,"assdddd");
    cout<<p<<endl;
    char p2[1000];
    cin>>p2;
    cout<<"p2:"<<p2<<endl;
    p=(char*)realloc(p,sizeof(p2));
    strcat(p,p2);

    char* p3 = end(p);
    cout<<"p3:"<<p3<<endl;
    
    
    //p=(char*)
   // cout<<s1.size()<<endl;
    string str("Teat string");
    
    for(std::string::iterator it=str.begin(); it!=str.end(); ++it)
        cout<<*it;
    cout<<'\n';
    
    // std::string str("There are two needles in this haystack with needles.");
    // std::string str2("needle");
    // std::size_t found = str.find(str2);
    // if (found!=std::string::npos)
    // std::cout << "first 'needle' found at: " << found << '\n';
    string std("Tering");
    cout<<std.find("T")<<endl;
    return 0;
}
 