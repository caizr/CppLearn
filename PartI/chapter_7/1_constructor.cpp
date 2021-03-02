/* 构造函数 */
#include<iostream>

using namespace std;

//定义一个类
class Person{
    private:
        string strName="None";
        string strAddress="None";
        string ISBN="empty";
        double price=0;

    public:
        /* 构造函数 */
        // 默认构造函数，暂时不知道有什么用
        Person() =default;
        //第二种形式
        Person(const string &s):strName(s) {}
        // 第三种形式
        Person(const string &s,const string &add,
                const string &isbn, const double &p):
                strName(s),strAddress(add),ISBN(isbn),
                price(p){}
        // 第四种形式
        Person(const string &,const string &);

        string getName() const{
            //我用的是return this->strName
            return strName;
        }
        string getAdress() const{
            return strAddress;
        }
        double getPrice() const{
            return price;
        }
};
//在类的外部定义构造函数
Person::Person(const string &s, const string &add):
    strName(s),strAddress(add){cout<<"successfully";}
int main(){
    Person o1("a","a");
    cout<<o1.getPrice();
    return 0;
}