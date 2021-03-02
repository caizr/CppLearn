/* 可变参数行参 */

#include<iostream>
#include<stdarg.h>

/* initializer_list 行参，参数数量未知，但类型相同 */
//initializer_list<T> lst;  //类似vector
using namespace std;
void error_msg(int a,initializer_list<string> i1){
    for(auto beg=i1.begin();beg!=i1.end();++beg){
        cout<< *beg<<" ";
    }
    cout<<endl;
}

//省略符形参
void Function(const char *str,...)
{
    va_list ap;
    int n = 3;
    char *a = NULL;
    int b = 0;
    double c = 0.0;
    va_start(ap, str); // 注意！这里第二个参数是本函数的第一个形参
     a = va_arg(ap, char*);
     b = va_arg(ap, int);
     c = va_arg(ap, double);
     // 浮点最好用double类型，而不要用float类型；否则数据会有问题
     va_end(ap);
     printf("%s is %s %d, %f", str, a, b, c);
}

int main(){
    //调用error_msg
    error_msg(2,{"functionX","okay","no"}); //注意{}
    Function("hello","this",3);
    return 0;
}

