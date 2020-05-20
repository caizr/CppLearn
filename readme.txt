caizr
这是我学习c++ primer, 5th所记录的笔记每一章创建了一个目录以及对应章节的问题记录在里面。
未理解的页码: P61

跳过/未解决的代码: P100二分法, Chapter4一开始的rvalue和lvalue

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
           main函数参数，可变参数（省略符形参没怎么看和理解),函数返回引用

           返回vector；函数指针（跳过）；函数重载（感觉会，跳过）；默认实参；
           内联函数；constexpr（感觉有点花里胡哨，暂时跳过)
           返回vector
           函数指针

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

            /* 函数返回引用 */
            //返回引用的时候，不会先复制再返回，而是返回对象本身
            string &get_val(string &s, int x){
                return s[x];
            }
            //调用
            string s1="a value";
            get_val(s1,0)='A';   //s1现在为"A value"

            /* 函数指针作为形参 */
            虽然函数不能作为参数，但是可以通过函数指针来实现功能

chapter_7:  const成员函数，构造函数

chapter_7 NOTICE:
            /* const成员函数 */
            // 常量对象、常量对象引用、或指针都只能用常量成员函数
            // 如果对象只涉及读操作，尽量用常量成员函数
            string isbn() const{return this->bookNo;}
            //const的作用是修饰this指针，与一下伪代码等价
            string isbn(const Sales_data * const this){
                return this->isbn;
            }

            /* 构造函数 */
            1. 构造函数可以重载
            2. 默认构造函数
            3. 构造函数不能被声明成const
            