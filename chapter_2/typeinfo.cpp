/*类型的检查
 * 使用#include<typeinfo>头文件
 * typeid(variable_name).name()
 * 返回variable_name的类型名称
 */
#include<iostream>
#include<typeinfo>

using namespace std;
int main(){
	long v1=3;
	cout<<typeid(v1).name()<<endl;
	return 0;
}
