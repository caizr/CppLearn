/* 迭代器
 * 如果a是可迭代的（string, vector等）
 * b=a.begin()指的是首元素
 * b=a.end() 指的是尾元素的下一个位置（无意义的）
 * *b是取值（类似于指针的取地址指向的内容）
 * 迭代器类型
 * 例如vector<int> v1={1,2,3}
 * 那么 v1.begin()的迭代器类型：
 * vector<int>::iterator a=v1.begin()
 * 注意！！！凡是使用了迭代器，都不要使用push_back添加
 * 元素！那样会可能使迭代器失效！
 */
#include<iostream>
#include<vector>
using namespace std;
int main(){
    string a="hello";
    auto b =a.begin();  //b指向首元素（即h）
    auto c =a.end();    //c指向尾元素的下一个元素（不是o）
    /* 迭代器的运算符 */
    --c;                //令iter指示容器中的上一个元素
    ++c;                //相反
    b==c;               //判断两个迭代器是否相等

    /*常量迭代器类型*/
    vector<int> v1={1,2,3,4};
    auto a1=v1.cbegin(); //a1只能读不能写
    auto a2=v1.cend();   //类似的
    string::iterator d=a.begin();

    /*解引用及成员访问操作*/
    vector<string> v2={"","string"};
    auto a3=v2.begin();  //迭代器
//  *a3.empty();         //错误，迭代器本身没有empty()成员
    (*a3).empty();       //正确，先解引用，string对象有empty()成员
    a3->empty();         //正确，效果很上句一样

}
