/* size, sizeof, 类型转换 */
#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main() {
	/* size, sizeof */
	vector<int> v1 = { 1,2,3,4,5,6,7 };
	int i1 = size(v1);					//size为数组/向量中元素的个数
	int i2 = sizeof(v1);				//sizeof为数组/向量中基本元素类型的字节数

	/* 类型转换 */
	int i3 = 3.14 + 5;					//其实顺序是 5转换成 5.0, 再
	cout << size(v1);
	return 0;
}