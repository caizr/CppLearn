// 关联容器
#include<iostream>
#include<string>
#include<map>
#include<set>
using namespace std;
int main(){
    map<string,int> test;
    test["hello"]=123;
    for(auto c:test){
        cout<<c.second;
    }


    return 0;
}