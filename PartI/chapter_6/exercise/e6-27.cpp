/* 编写一个函数，参数initializer_list<init>类型对象，函数的功能是计算列表表中所有元素的和 */
#include<iostream>

using namespace std;

// 根据行参的数量求和
void Sum(initializer_list<int> i1){
    int sum_of_list=0;
    //i1可以当作 vector<int> i1
    // i1.begin()即为迭代器
    for(auto beg=i1.begin();beg!=i1.end();++beg){
        sum_of_list += (*beg);
    }
    cout<<"sum "<<sum_of_list<<endl;
}
int main(){
    Sum({1,2,3,5,6});
    return 0;
}
