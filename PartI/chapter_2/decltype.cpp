/* decltype的使用
 * decltype可以不初始化变量
 *
 *
 *
 *
 *
 *
 */
#include<iostream>
using namespace std;

double fun1();

int main(){
	int v1=0;
	decltype(v1) d1; //d1为int型
	const int v2 = 1;
	decltype(v2) d2=11;//d2为const int型，必须初始化
	/* decltype会分析表达式的类型，不会运行 */
	decltype(fun1()) d3;//分析，但不执行fun1()
	auto a1 = fun1();	//执行了fun1()
	/* decltype与引用 */
	int *p1 = &v1;
	decltype(p1) d4; //d4为指针
	decltype(*p1) d5 = v1; //d5为int型引用，必须初始化
	int &r1 = v1;
	decltype(r1) d6 =v1;	//int型引用
	decltype(r1+0) d7;	//int型!!
	/* decltype 双层括号 */
	decltype((v1)) d8=v1;	//int型引用

	return 0;
}
double fun1(){
	cout<<"fun1 running!"<<endl;
	return 1.23;
}
