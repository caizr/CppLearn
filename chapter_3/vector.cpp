/* vector类型的使用
 * vector<type> var
 *
 */
#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"hello, world"<<endl;
    /* 值初始化 */
    vector<int> v1(10,2);    //10个全为2的元素
    vector<int> v2{10,2};    //2个元素，分别为10，2
    vector<int> v3(10);      //10个元素全为0的元素
    vector<int> v4{10};      //1个元素，值为0
    /* 特殊情况 */
/* 一般()用来构造，{}用来初始化；
 * 如果{}里面的元素无法执行初始化
 * 则执行构造——()
 */
    vector<string> v5{10};    //由于10不是string型，故执行构造，
                              // v5是10个空元素
    vector<string> v6{10,"hi"};//同(10,"hi")
    /* 元素操作 */
    vector<int> v7(10,1);
    v7.push_back(3);          //尾端添加元素
    v7.empty();               //检测vecto是否为空
    v7.size();

    cout<<v7[10]<<endl;
    return 0;
}
