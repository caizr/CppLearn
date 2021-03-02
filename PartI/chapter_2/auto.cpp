/*auto的使用以及注意事项
 *const int *const p1 
 *第一个const为顶层const，指针所指对象为常量
 *第二个const为底层const，指针是个常量
 *设置一个类型为auto引用的时候，顶层const会保留：
 *auto &ar1=v1;
 *如果v1为const型，ar1为常量引用，反之亦然
 */


#include<iostream>
using namespace std;
int main(){
	int v1 = 3;
	double v2= 3.14;
	auto a1=v1;		//j1为int型
//	auto a1=v1,a2=v2;	//error, j1和j2类型不一致

	auto a2 = &v1;		//a2是一个指针

	/*对于顶层const型变量*/
	const int  v3=3;	
	auto  a3=v3;		//忽略顶层const，所以a3为int型
	a3  =5;			//legal
	cout<<a3<<endl;		//输出5

	/*对于底层const型变量*/
	int v4 = 4;
	int *const p4 = &v4;	//底层const，指针是常量
	auto a4 = p4;		//底层const会保留，故a4为指针常量
//	a4 = &v3;		//error,a4是指针常量
	*a4 = 6;		//legal
	cout<<*a4<<endl;


	const int v5=5;		//
	auto a5 = &v5;		//注意是底层const(我不理解),所以*a5不可改
	a5 = &v4;		//legal，指针本身不是常量
//	*a5=44;			//error,指向对象是常量(其实v4本身不是常量)不可改
	cout<<*a5<<endl;

	/* 设置推断类型为const*/
	int v6=6;
	const auto a6=v6;
//	a6 = 66;		//error,a6是const int型
	
	const int v7=7;
	auto &a7=v7;		//a7作为v7的引用，a7为常量引用
//	a7 = 8;			//error，常量引用的对象不可更改
//	auto &a8=8;		//error, a8是非常量引用,和上面有区别，有点奇怪
	const auto &a8 =8;	//legel
	
	return 0;
}
