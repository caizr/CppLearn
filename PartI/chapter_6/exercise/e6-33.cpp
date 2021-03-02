/* 编写一个递归函数，输出vector对象的内容 */
#include<iostream>
#include<vector>
using namespace std;

//使用头、尾迭代器，有更好的方案吗？
void OutputVector(vector<int>::iterator beg,vector<int>::iterator end){
    if(beg==end)                //还需要加入判断vector是否为空的准则
        return;
    cout<<(*beg)<<endl;
    OutputVector(++beg,end);
}

//习题集答案使用的方案
void print(vector<int> vInt,unsigned index){
    unsigned sz=vInt.size();
    if(!vInt.empty() && index<sz){ //需要判断是否为空
        cout<<vInt[index]<<endl;
        print(vInt,index+1);
    }
}

int main(){
    vector<int> v1={1,2,3,4};
    OutputVector(v1.begin(),v1.end());
    return 0;
}