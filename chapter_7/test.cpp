#include<iostream>
#include<string>

int &sa(int &i1){
    i1=i1+1;
    int i2=i1;
    return i2;
}
using namespace std;
int main(){
    int a=9;
    int &b=sa(a);
    cout<<b<<endl;  
    return 0;
}