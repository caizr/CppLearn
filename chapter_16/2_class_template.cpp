/* 类模板 */
#include<iostream>

using namespace std;

template<class T>
class Book{
    public:
        //构造函数
        Book(const T & f1,const T &f2,int n): feature1(f1),feature2(f2),num(n){}

        T getF1() const {cout<<feature1;return feature1;}
        T getF2() const {cout<<feature2;return feature2;}
        int Booknum() const {cout<<num;return num;}

    private:
        T feature1;
        T feature2;
        int num;
};
int main(){
    //实例化类模板，b1和b2是两个不同的类
    Book<string> b1("hello","haha",2);
    Book<double> b2(3.14,6.22,3);
    b1.getF1();
    b2.getF2();
    return 0;
}