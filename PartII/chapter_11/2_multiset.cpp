#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);v.push_back(1);v.push_back(2);
    set<int> s(v.begin(),v.end());
    multiset<int> ms(v.begin(),v.end());
    auto test=s.emplace(2);


    return 0;
}