/*
 * 关于引用的见解
 * 引用首先不是对象，其次必须在定义的时候就初始化，
 * 一定初始化了引用，就无法更改其绑定的对象。
 * 指针无法指向引用，因为引用不是对象，
 * 但是引用可以绑定指针，书上的用法:
 * int *p,*&r1=p;
 * 我自己觉得还有一种用法:
 * int *p, &r2=p;
 */
#include<iostream>
using namespace std;
int main(){
	int v1=2,*p1=&v1;
	int v2=3,*p2=&v2;
	int &r1=*p1;	//reference to v1
	int *&r2=p2;	//reference to pointer
	cout<<r1<<" "<<*r2<<endl; //output: 2 3

	r1=5;		//改变了v1的值
	r2=p1;		//并不是改变r2的绑定对象
			//而是r2所绑定的对象是个指针
			//改变了该指针所指向的对象
	cout<<v1<<" "<<*r2<<endl;
	return 0;
}
