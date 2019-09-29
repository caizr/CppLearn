/* 关于typedef的使用
 * typedef int number,*pointer
 * 
 * 前面的很好理解，就是number是
 * int的别名。
 *
 *注意pointer是int型指针
 *
 *还有一种using的用法:
 *using number = int;
 */
#include<iostream>
typedef int number, *pointer;
using namespace std;
int main(){
	number a=1;		//与int a=1相同
	pointer p=&a;		//与int *p=&a相同
	pointer *p2 = &p;	//int **p2=&p
	cout<<a<<" "<<*p
		<<" "
		<<**p2
		<<endl;
	return 0;
}
