/* 使用引用传参交换两个变量的值*/
#include<iostream>
using namespace std;

void SwitchNum(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

int main(){
    int i1=10,i2=20;
    cout<<"before : i1 i2 "<<i1<<i2<<endl;
    SwitchNum(i1,i2);
    cout<<"after: i1 i2 "<<i1<<i2<<endl;
    return 0;

}