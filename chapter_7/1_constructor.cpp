/* 构造函数 */
#include<iostream>

using namespace std;

//定义一个类
class Person{
    private:
        string strName;
        string strAddress;
        string ISBN;
        double price;

    public:
        /* 构造函数 */
        // 默认构造函数，暂时不知道有什么用
        Person() =default;


        string getName() const{
            //我用的是return this->strName
            return strName;
        }
        string getAdress() const{
            return strAddress;
        }
};
int main(){
    Person o1;
    cout<<o1.getAdress();
    return 0;
}