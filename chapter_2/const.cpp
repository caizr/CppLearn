/*对const限定符的理解：
 * const int &r1 = ___
 * 这个___可以是int,也可以是const int。
 * 但是如果是const int型的变量，就必须用
 * const int &去引用。
 * 
 * 另外，假如const int &r1 = v1，那么：
 * r1=3，是不合法的，因为const int型引用
 * 无法改变引用目标对象的值。
 *
 * 还有一点, const int &r1=3是合法的，因
 * 为3是常量，而int &r1=3就是非法操作。
 */

/*对const和pointer结合的理解：
 * const int *p
 *int *const p
 *int const *p
 *
 * 上述的语句可以从右往左读，如第一行左边
 * 是指针，右边是int型，最右边是常量，说明
 * 是一个指向常量的int型指针
 *
 * 第二行左边第一个是常量，右边是指针，最
 * 右边是int型，说明是一个常量指针，不可以
 * 更改指向的地址，但是其指向的对象的值能
 * 否更改取决于指向对象本身是不是可以更改
 *
 * 经过自己测试，第三行和第一行的效果是一样
 * 的，可以先看左边第一个是指针，不建议用第
 * 三个用法
 */
#include<iostream>
using namespace std;
int main(){
	/* const int 引用案例 */
	int v1=3;
	const int &r1=v1;	//合法
	int &r2=v1;
	r2=222;			//合法，但是r1=222非法
	cout<<r1<<endl;

	/* 指向常量的指针 */
	const int v2 = 4;	//
	const int *p2 = &v2;	//等号左边，从右往左，就好理解
				//pointer to const
	p2 = &v1;		//合法，指针本身不是常量
	int v3 = 5;
	const int *p3 = &v3;
// 	*p3 = 7;		//非法，因为指向常量的指针无法
				//更改其指向目标对象的值
	p3 = &v3;		//合法，因为p3本身是指针对象，
				//它并不是常量，只是指针目标对象
				//不可更改而以
	cout<<*p2<<" "<<*p3<<endl;

	/* 指针常量 */
	int v4=1;
	const int v5=2;
	int *const p4 = &v4;	//创建一个指针常量
				//注意不是int const *p4
				//
//	int *const p5 = &v5;	//非法，该常量指针常量指向的是一个
				//常量，常量只能通过指向常量的指针
				//去指向
	*p4 = 88;		//合法
//	*p5 = 99;		//非法，因为指向目标对象是常量
//	常量指针能不能通过指针修改其所指向的值取决于指向的对象的类型
//	int *p=&v5;		//非法，常量必须由指向常量的指针来指向
	const int *const p6=&v5;//合法，常量指针，且指向一个常量
	cout<<*p4<<endl;

	return 0;
}
