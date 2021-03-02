/* static 类的静态成员 
* 静态成员函数不能用this
* 静态成员变量应该在类外进行初始化
*/

#include<iostream>
#include<string>
using namespace std;

class Bank{

    static  double interest_rate;
    
    public:
        double getInterest()const{
            return interest_rate;
        }
        void ChangeIntRate(double i){
            interest_rate=i;
        }
        static void CIR(double i){
            interest_rate=i;
        }

};
//Bank::interest_rate=0.5,错误
double Bank::interest_rate=0.5;

int main(){
    Bank b1;
    Bank b2;
    b1.CIR(0.8);
    
    //b1.CIR(2);
    //b1.ChangeIntRate(3);
    //b1.interest_rate=0.3;
    //b1.changeInterest(0.5);
    cout<<b1.getInterest()<<endl;
    return 0;
}