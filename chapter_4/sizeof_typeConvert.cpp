/* size, sizeof, ����ת�� */
#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main() {
	/* size, sizeof */
	vector<int> v1 = { 1,2,3,4,5,6,7 };
	int i1 = size(v1);					//sizeΪ����/������Ԫ�صĸ���
	int i2 = sizeof(v1);				//sizeofΪ����/�����л���Ԫ�����͵��ֽ���

	/* ����ת�� */
	int i3 = 3.14 + 5;					//��ʵ˳���� 5ת���� 5.0, ��
	cout << size(v1);
	return 0;
}