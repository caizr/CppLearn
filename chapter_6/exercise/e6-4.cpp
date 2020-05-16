/* 实现阶乘 */
#include<iostream>
int Multiple(int);
using namespace std;

int main(){
    cout<<"Multi(4): "<<Multiple(4)<<endl;
    return 0;
}

int Multiple(int x){
    if(x==0) return 1;
    return x * Multiple(x-1);
}