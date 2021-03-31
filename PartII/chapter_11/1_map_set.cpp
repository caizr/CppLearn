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
    multimap<string, int> mm;
    mm.insert({"aa",123});
    mm.insert({"aa",456});
    ++test["bs"];

    return 0;
}