/* 判断两个字符串是否长度相等？如果相等，返回是，如果不等，返回长的那个字符串*/
#include<iostream>
using namespace std;
string compare_string(string,string);

int main(){
	string s1,s2;
	cin>>s1>>s2;
	cout<<compare_string(s1,s2);
	return 0;
}

string compare_string(string s1,string s2){
	if(s1.size()==s2.size())
		return "yes, two strings have the same length";
	else if (s1.size()>s2.size())
		return s1;
	else 
		return s2;
}
