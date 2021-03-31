#include<iostream>
#include<string>
using namespace std;
/* 析构函数测试 */
class HasPtr{
public:
    HasPtr(const string & s=string()): ps(new string(s)), i(0) {}
    ~HasPtr(){delete ps;}
private:
    string *ps;
    int i;
};

int main(){
    HasPtr o1("hello");
    HasPtr o2(o1);
    return 0;
}