/* string对象操作
 *
 *
 */
#include<iostream>
using namespace std;
int main(){
	string s1,s2;
	cin>>s1>>s2;	//注意输入字符串碰到空格就会停止
			//如果输入hello world，那s1为hello
			//s2为world
	string s3;
	getline(cin,s3);//读取一整行，包括空格在内

	/* string的比较: <,>,<=,>=,!= */
	string s4 = "abc hijk";
	string s5 = "defg";
	cout<<(s4>s5);
	return 0;
}
