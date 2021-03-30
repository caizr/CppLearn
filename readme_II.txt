


chapter_16:
            template<typename T,class U>；类模板；类模板与友元；类模板静态成员；
            模板声明与定义；
chapter_16 NOTICE:
            1. 在模板参数列表中，typename和class含义相同，可以互换
            2. 模板函数不会生成代码，编译的时候生成，所以如果模板函数
               里面有错误的时候，只有在实例化是才会发现错误
            3. 模板成员函数在类外定义的时候，必须有模板参数列表，如：
                template<class T>
                void Book<T>::get() {...}
            4. /* 类模板与友元 */
                //与所有的类模板为友元关系：
                //前置声明
                template<typename T> class BlobPtr;
                template<typename T> class Blob;
                template<typename T> class Blob{
                    //友元类
                    friend class BlobPtr<T>;
                    //友元函数
                    friend bool operator==<T>(const Blob<T>&,const BlobPtr<T>&) 
                }

                /* 限制类模板中的特性模板类型保持友好关系 */
                //与特定的的类模板为友元关系：
                //前置声明
                template<typename T> class BlobPtr;
                template<typename T> class Blob;
                template<typename T> class Blob{
                    //友元类
                    friend class BlobPtr<int>;
                    //友元函数
                    friend bool operator==<int>(const Blob<T>&,const BlobPtr<T>&) 
                }
                /* 令自己的模板为友元 */ (新标准)
                template<typename T> class Blob{
                    friend T;
                }
                意思就是 Book是 Blod<Book>的友元

            5. 模板类型别名
                typename Blob<string> strBlob;
                strBlob就是实例化的模板版本的Blod
            6. 类模板静态成员
                template<typename T> class Blob{
                    public:
                        static std::size_t count(){return ctr;}
                    private:
                        static std::size_t ctr;
                }
                //初始化
                std::size_t Blob<T>::ctr=0;
                //使用静态成员函数
                 int c; Bloc<int> b1;
                 c = Blob<int>::count();      //正确
                 c = b1.count();              //正确
                 c = Blob::count();           //正确

            7. 模板声明与定义

                template<typename T> int count(const T & );     //只声明不定义
                /* 定义的时候，定义中的模板参数名字不必与声明的模板参数相同 */
                template<typename U> int count(const U & c1){ /*... */ } //定义


************************************  PART II   ************************************

chapter_9:
            list,vector,deque,string,array,foward_list容器，以及它们的优缺点；
            迭代器 iterator, reverse_iterator, const_iterator;
            迭代器初始化
chapter_8 NOTICE:
            1. 对于容器的 == 运算符，会对比容器里面的值，值相等就返回为真
            2. 迭代器范围： begin end,通过递增begin达到end
                           rbegin rend是反过来的
            3. array容器定义方式: array<int,10> a1, array<int,10>和
               array<int,12>是两种类型

chapter_11: (关联容器)
            map和set，8种类型 map,set,multimap,multiset; unordered_map, unordered_set,
            unordered_multimap, unordered_multiset

            map<string,int> variable,  使用for auto c:variable的时候, 那么c.first就是key 
            c.second就是value

