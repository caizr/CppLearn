#include<iostream>
float sum(float a,float b);
using namespace std;
int main(){
    int a,b,c;
    cin>>a;
    cout<<"you have typed"<<a<<endl;
    c=sum(a,b);
    return 0;
}
float sum(float a,float b) {
    return a+b;
}