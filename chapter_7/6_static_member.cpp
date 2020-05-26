/* static 类的静态成员 */

#include<iostream>
#include<string>
using namespace std;

class Bank{

    static  double interest_rate;
    
    public:
        static double getInterest(){
            return interest_rate;
        }
        void ChangeIntRate(double i){
            interest_rate=i;
        }
        static void CIR(double i){
            interest_rate=i;
        }

};
double Bank::interest_rate=0.5;

int main(){
    Bank b1;
    Bank b2;
    b1.CIR(0.5);
    //b1.CIR(2);
    //b1.ChangeIntRate(3);
    //b1.interest_rate=0.3;
    //b1.changeInterest(0.5);
    //cout<<b1.getInterest()<<endl;
    return 0;
}