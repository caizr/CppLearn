/* for语句的新特性 */
#include<iostream>
#include<vector>
using namespace std;

int main(){
    /* 范围for语句 */
    // for(声明：序列)
    int a[10]={1,2,3};
    for(int i:a){       //i 每次为a的元素
        cout<<i<<endl;
    }
    //例子2
    vector<int> v1{1,2,3,4,5};
    for(auto v:v1){
        cout<<v<<endl;
    }
    return 0;
}