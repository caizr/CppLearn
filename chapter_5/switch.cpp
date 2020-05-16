/* switch 语句 */
/**/
#include<iostream>
using namespace std;
int main(){
    int i1;
    cout<<"type your score"<<endl;
    cin>>i1;
    switch(i1){
        case 1: cout<<1<<endl;break;
        case 2: cout<<2<<endl;break;
        case 3: cout<<3<<endl;break;
        default: cout<<5;            //default这里最好也加上标签
    }
    /* case 和 变量不是一个类型的时候 */
    int i2;
    switch(i2){
        //case 2.3:               //编译直接不通过
            cout<<"float number";
            break;
    }

    /* 有时候故意不要break 进行控制流操作 */
    //统计元音字母个数
    char c1='a';
    unsigned vowelCnt=0;
    switch(c1){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            ++vowelCnt;
            break;
    }

    /* 禁止在控制流内初始化变量，即在case里面初始化变量 */
    switch(2){
        case 1:
 //         int c3=0;               //错误
            break;
        case 2:
            break;
    }
}