/* 记录最大单词重复次数 */
#include<iostream>
using namespace std;
int main(){
    string s1;
    cout<<"type a string"<<endl;
    string s1_copy;
    int count=1;
    while(cin>>s1){
        if (s1==s1_copy)
            ++count;
        else if (s1 != s1_copy)
            cout<<"no"<<endl;
        s1_copy=s1;         //记录上一个输入的英文单词
    }
    cout<<count<<endl;    
}
