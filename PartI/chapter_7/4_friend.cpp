/*友元函数 */
#include<iostream>
#include<string>
using namespace std;

/* 友元函数*/
class Sales{
    private:
        string strName;
        //友元函数
        friend void ChangeName(const string & Name);
        friend void ChangeName(Sales &o1,const string & Name);
        //友元类
        friend class Order;
    public:
    // 友元函数声明，定义可以放在外部

        string getName() const{
            return this->strName;
        }
};
void ChangeName(const string &Name){
    //错误
    //this->strName=Name;
    ;//cout<<Name<<endl;
}
//如何使用友元访问类成员？讲类作为行参
void ChangeName(Sales &o1,const string &Name){
    o1.strName=Name;
}

/* 友元类*/
class Order{
    private:
        int num=0;
    public:
        void ChangeSalesName(Sales &o1,string const & Name){
            o1.strName=Name;
        }
};
int main(){
    Sales s1;
    ChangeName(s1,"hello");
    //使用友元类修改私有成员
    Order o1;
    o1.ChangeSalesName(s1,"world");
    cout<<s1.getName()<<endl;
    return 0;
}