
#include<iostream>
using namespace std;
int main(){
	string s1;
	while(cin>>s1){
		for(int i=0;i<s1.size();++i){
			auto b=isalnum(s1[i]);
			cout<<b<<endl;
		}
	}
	return 0;
}
