/* 数组
 * 指针数组和数组指针的区别
 * 指针和数组
 * 指针迭代器
 * 指针运算
 * 下标及指针
 */
#include<iostream>
#include<iterator>
using namespace std;
int main(){
    int a1[10]={0,0};         //
    int a2[]={1,2,3,4};
    char a3[]="char_array";  //

    /* 指针数组、数组指针 */
    int *ptrs[10];           //ptrs是含有10个整形指针的数组
    int (*Parray)[10] = &a1; //Parray是一个指向含有10个元素的数组
    int (&arrRef)[10] = a1;  //arrRef引用一个含有10个元素的数组
    cout<<a3<<endl;
    /* 指针和数组 */
    string nums[] = {"one","two","three"};
    string *p1 = nums;        //等价 string *p1=&nums[0]
    int ia[] = {0,1,2,3,4,5,6};
    auto ia2{ia};             // ia2指向ia的第一个元素
    auto ia3(&ia[0]);         //同上
    decltype(ia) ia4={11,22}; // ia4是一个数组，有10个元素，后8个都是0

    /* 指针、迭代器 */
    auto i1=begin(ia);          //指向第一个元素，begin()在iterator头文件中
    auto i2=end(ia);            //指向尾元素的下一个元素，同在iterator中

    /* 指针运算 */
    int *ip1 = &ia[0];
    int *ip2 = &ia[4];
    //cout<<ip2-ip1<<endl;      //必须指向同一个数组，结果为4
    //end(arr)-begin(arr) 即为数组的元素个数,其类型ptrdiff_t, 在cstddef头文件中

    /* 下标及指针 */
    int *ip3 = &ia[4];
    cout<<ip3[-2]<<endl;        //这是的操作就把指针名当成数组名，注意不是ip3(-2)!!!

    return 0;
}
