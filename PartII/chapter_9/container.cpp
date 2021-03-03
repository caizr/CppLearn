/* 顺序容器
* 
* 
*/
#include<iostream>
#include<vector>
#include<deque>
#include<iterator>
#include<array>
using namespace std;

int main(){
    vector<int> v1={1,2,3};
    vector<int> v2(v1);
    vector<int> v3=v1;

    vector<int>:: iterator i1=v1.begin();
    auto ri1=v1.rbegin();
    auto ri2=v1.rend();
    v3[0]=1;
    // v2[0]=22;
    // v2.swap(v1);
    array<int,10> digit={1,2,3,4,5,6};
    digit={0};
    cout<<*--ri2<<endl;
    return 0;
}