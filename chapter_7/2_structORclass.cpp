/* struct 和 class定义类 
 *
 * 两种方式都可以定义类
 * 唯一区别就是在访问说明符(private和public)
 * 之前定义的成员，class是private，而struct
 * 是public          
 */

#include<iostream>
using namespace std;

//使用class定义
class C1{
    int Age=0;
    private:
        string Name="NONE";
    public:
        string Address="None";
};
//使用struct定义
struct S1{
    int Age=0;
    private:
        string Name="NONE";
    public:
        string Address="None";
};

int main(){
    C1 o1;
    S1 o2;
    cout<<o1.Address<<endl; //允许
    //cout<<o1.Age<<endl;   //不允许
    cout<<o2.Age<<endl;     //允许
    cout<<o2.Address<<endl; //允许  
    return 0;
}