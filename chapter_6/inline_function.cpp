/* 内联函数 */

#include<iostream>


//背景： 简单操作、仅有几句的函数，虽然不用重复编写冗余的代码
//      但是每次调用实际上是需要一系列操作的，如果定义成内联
//      函数，会省去一些时间开销

inline const string & shortestString(const string &s1,const string &s2){
    return s1.size()<=s2.size()? s1:s2;
}

using namespace std;

int main(){
    //每次调用不再是原来的调用函数->传参->返回参数那样繁琐的过程
    cout<<shortestString("aaa","bb")<<endl;
    //等价于 cout<<("aaa".size()<"bb".size()? "aaa":"bbb")<<endl;
    return 0;
}