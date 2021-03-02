/* 使其能统计含有两个字符的数量：ff,fl和fi */
#include<iostream>
using namespace std;
int main(){
    string s1;
    cout<<"type a string"<<endl;
//  cin>>s1;            //使用这种方式会忽略空格
    getline(cin,s1);
    unsigned int count=0;
    for(int i=0;s1[i];++i){
        if (s1[i]=='f')
            if(s1[i+1]=='f')
                ++count;
            else if(s1[i+1]=='l')
                ++count;
            else if(s1[i+1]=='i')
                ++count;
        continue;
    }
    cout<<"number: "<<count<<endl;
}