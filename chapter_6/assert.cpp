/* assert预处理宏 */
#include<iostream>
#include<cassert>
using namespace std;
int main(){
    cout<<"hello ";
    //assert里的表达式为0，终止运行
    assert(0);
    cout<<"world"<<endl;
    return 0;
}