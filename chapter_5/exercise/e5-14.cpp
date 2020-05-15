/* 记录最大单词重复次数 */
#include<iostream>
using namespace std;
int main(){
    string s1;
    cout<<"type a string"<<endl;
    string s1_copy;
    int count=1;
    while(cin>>s1){         //只能统计一次，如果后面有另外的单词重复，会计算错误
        if (s1==s1_copy)
            ++count;
        s1_copy = s1;
    }
    cout<<count<<endl;    
}
