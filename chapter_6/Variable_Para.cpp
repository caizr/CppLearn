/* 可变参数行参 */

#include<iostream>

using namespace std;

int main(){
    /* initializer_list 行参，参数数量未知，但类型相同 */
    //initializer_list<T> lst;  //类似vector
    
    return 0;
}
/* 实例： 输出错误信息的函数 */
void error_msg(initializer_list<string> i1){
    for(auto beg=i1.begin();beg!=i1.end();++beg){
        cout<< *beg<<" ";
    }
    cout<<endl;
}