/* mutable 可变数据成员 
* 如果对象申明为const，那么无法修改里面的成员的值
* 除非使用mutable修饰符
*/
#include<iostream>
#include<string>

using namespace std;

class Sales{
    private:
        mutable string strName="default";
        mutable string strAddress;
    public:
        int num;
        mutable double pricess;
        //构造函数，如果没有构造函数，const Sales obj会报错
        Sales(string Name,string Add){
            this->strName=Name;
            this->strAddress=Add;
        }

        //因为string没有mutable修饰,无法修改const Sales obj中的strName成员
        /*
        void ChangeName  (const string & Name)const {
            this->strName=Name;
        }
        */
       //由于有mutable，所以能够通过
        void ChangeAddress  (const string & Add)const {
            this->strAddress=Add;
        }
        string & getName ()const{
            return this->strName;
        }
};
int main(){
    
    const Sales o1("hello","CHINA");
    o1.ChangeName("hello");
    o1.ChangeAddress("CHINA");
    cout<<o1.getName()<<endl;
    return 0;
}