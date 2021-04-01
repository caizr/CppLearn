#include<iostream>
using namespace std;
/* =delete 阻止拷贝 */

class Hasptr{
private:
    int a;
    int *b;
public:
    Hasptr(): a(2),b(new int (3))
    {cout<<"test"<<endl;}
    // Hasptr(const int b1=3) {
    //     b=new int(b1);
    // }
    // Hasptr(const Hasptr&) =delete;
    Hasptr(const Hasptr& a1) { 
        a=a1.a;
        b=new int(*a1.b);
    }
    Hasptr& operator=(const Hasptr& a2) {
        this->a=a2.a;
        this->b=new int(*a2.b);
        return *this;
    }
    ~Hasptr(){
        delete b;
    }
    friend void test(Hasptr a);
};
void test(Hasptr a){
    Hasptr b;

}
int main(){
    Hasptr o1;
    Hasptr o2=o1;
    
    int a=0;
    Hasptr o3;
    // o3=o1;
    int b=333;
    return 0;
}