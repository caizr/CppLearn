/* 函数指针 */
#include<iostream>
using namespace std;

int sum(int a,int b){
    int c=a+b;
    return c;
}

/* 函数指针可以作为形参 */


int main(){
    int a=333;
    int (*suma)(int a,int b);
    //注意，必须返回类型和形参都匹配
    suma=sum;
    //等价于 suma=&sum
    cout<<suma(2,1);
    //也可以用(*suma)调用
    return 0;
}