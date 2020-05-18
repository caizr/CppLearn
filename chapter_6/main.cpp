/* main 处理命令行选项 */
#include<iostream>

using namespace std;
int main(int argc,char **argv){
        cout<<argv[0]<<endl
            <<argv[1]<<endl;
        cout<<argc<<endl;
    return 0;
}