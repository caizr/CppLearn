#include<iostream>

using namespace std;

void SwitchNum(int *p1,int *p2){
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}

int main(){
    int a=10,b=20;
    cout<<"before, a,b: "<<a<<b<<endl;
    SwitchNum(&a,&b);
    cout<<"after, a,b: "<<a<<b<<endl;
    return 0;
}