/* 对比两个vector对象，比较是否其中一个为另一个的前缀 */
#include<iostream>
#include<vector>
using namespace std;
//函数声明
int CmpVec(vector<int> v1,vector<int> v2);

int main(){
    //测试
    vector<int> v1{};
    vector<int> v2{1,2,2,4,5,6};
    int status;
    status=CmpVec(v1,v2);
    cout<<status<<endl;
    return 0;
}
int CmpVec(vector<int> v1,vector<int> v2){
    //检查是否为空向量
    if(v1.empty() || v2.empty())
        return -1;
    //选取其中短向量的长度
    int prefix_len=0;
    if(v1.size()>v2.size())
        prefix_len=v2.size();
    else
        prefix_len=v1.size();
    //判断是否为前缀
    for(int i=0;i<prefix_len;++i){
        if(v1[i]==v2[i])
            ;
        else
            return 0;
    }
    return 1;
}