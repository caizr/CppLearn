/* 列表初始化返回值 */
#include<iostream>
#include<vector>
using namespace std;

vector<string> ERROR_MSG(string a,string b){
    string c="ERROR: ";
    return {c,a,b};
}
int main(){
    vector<string> e=ERROR_MSG("e1","e2");
    return 0;
}