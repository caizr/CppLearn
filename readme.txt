caizr
这是我学习c++ primer, 5th所记录的笔记每一章创建了一个目录以及对应章节的问题记录在里面。
未理解的页码: P61
<<<<<<< HEAD
跳过/未解决的代码: P100二分法, Chapter4一开始的rvalue和lvalue
=======
跳过/未解决的代码: P100二分法，P115附近的多维数组+指针的组合应用
>>>>>>> a242be7337ec6d38104756a0c9fee4dcbdaf3d5a
需要加强理解的部分: auto
索引：
chapter_2: reference, const, pointer以及const和pointer组合, auto
chapter_2 NOTICE:
            顶层const和底层const:
            /* 顶层const: i1的值不能被修改 */
            const int i1=1; 

            /* 底层const: 等价于int const *p */
            /* &p不能被修改，p能够被修改 */
            const int *p1 = &i1; 

            /* 顶层const: p2不能被修改 */
            int * const p2= &i1;

            
chapter_3: string, vector, 迭代器, 数组以及指针结合，多维数组*
chapter_3 NOTICE

            /* 数组不能被拷贝*/
            int a1[]=[1,2,3];
            int a2[]=a1;        //错误

            /* 数据的begin和end */
            int a[]={1,2,3,4};
            int *begin=begin(a);   //指向首元素指针
            int *last=end(a);      //指向尾元素下一个指针
            
            /* 迭代器的使用 */
            string a="string";
            auto c=a.begin(); //*c为's'
            //注意a.end()不是'g'，而是末尾的空

            
chapter_4: 算术运算及其优先级，size(of)，类型转换
chapter_5: E5-14残次品，只能统计一次
chapter_6: 函数声明，分离式编译，行参和实参，const行参和实参，数组行参
           main函数参数，可变参数（c函数交互）
chapter_6 NOTICE:
            注意引用传参和指针传参，
            指针传参仍然可以更改指针的值，此时行参仍然为拷贝，只不过
            指向的都是同一个地址。
            注意c++11之后建议使用 const char *而非char *
            建议使用引用传参的时候，如果不会更改参数的值，在定义的时候
            加上const修饰，防止参数的值以外被改变。使用引用传参能够节省
            内存空间，尤其的参数占用很大内存的时候
            /* 使用标记指定数组的长度 */
            1. c语言方式       while(*cp) *cp++
            2. 标准库方式      while(beg!=end) +beg++
            3. 显示传递        size=end-beg; for(size_t i=0; i!=size; ++i)

            /* main函数传参*/
            int main(int argc,int **argv);
            //调程序的时候 ./xxx p1 p2
            //此时argv[0]="./xxx",
            //argv[1]="p1",argv[2]="p2"
            //argc=3

