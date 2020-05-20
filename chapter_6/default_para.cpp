/* 默认实参 */
#include<iostream>

using namespace std;

//默认实参的定义为以下形式：
void screen(int a=1,int b=2, int c='j'){
    cout<<"a: "<<a<<" b: "<<b<<" c: "<<c<<endl;
}

int main(){
    // 不输入任何参数
    screen();       //此时a=1,b=2,c='j'
    // 输入部分参数
    screen(3);      // a=3,b=2,c='j'
    // 输入全部
    screen(3,2,1);  // a=3,b=2,c=1
    return 0;
}