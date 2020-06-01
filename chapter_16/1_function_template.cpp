/* 函数模板 */
#include<iostream>
#include<vector>
#include<string>
template<typename T>
int compare(const T&a,const T&b){
    if(a<=b) return 1;
    else    return -1;
}
class Book{

    public:
        //构造函数
        Book(const std::string &s,int n):strName(s),num(n){}
    private:
        std::string strName;
        int num;
};
int main(){
    using namespace std;
    double c=11.9,d=11.3;
    vector<int> v1{1,2,3};vector<int> v2{1,1,6};
    Book b1("he",1); Book b2("wo",2);
    //实例化
    cout<<compare(c,d)<<endl;
    cout<<compare(v1,v2)<<endl;
    //错误，类Book未定义<运算符！
    //cout<<compare(b1,b2)<<endl;
    return 0;
}