chapter_13: 拷贝构造函数，拷贝赋值运算符，析构函数， =default已经=delete，private阻止拷贝，拷贝控制
            自定义swap，对象移动
chapter_13 NOTICE:
            
            /* 拷贝构造函数 */
            1. class_name( const class_name&) 注意是引用型
            2. class a=b; 触发 非引用形参 触发 返回非引用类型 触发， 向容器push_back对象时也会触发
               所以说容器内的对象不会影响原来用来赋值的那个对象；但是emplace不一样
            3. 使用默认的合成构造函数，如果类内有指针成员，会造成两个实例内成员指向同一个内存（潜复制），
               调用析构函数时会清空两次内存引发异常
            4. 合成的会将非static成员拷贝在正在创建的对象中

            /* 拷贝赋值运算符 */
            1. class_name& operator=(const class_name&)
            2. a=b时触发（已经初始化后使用赋值运算符）
            3. 赋值运算符返回左侧运算对象的引用


            /*析构函数*/
            1. 成员是指针，析构函数不会delete该指针所指向的对象
            2. 触发条件： 离开作用域、delete手动销毁、容器被销毁时自动删除其元素、临时对象
            3. 对象的引用、指针离开作用域时不会触发析构函数
            下面这种情况会触发析构：
                  HasPtr f(HasPtr hp){
                     HasPtr ret=hp;
                     return ret;
                  }
            f返回时，hp和ret都被销毁，如果HasPtr有指针成员，且这几个对象包含相同的指针值就会出现错误
            /* 什么时候需要这些函数 */
            1. 如果一个类需要自定的析构函数，那么他一定需要拷贝构造函数和拷贝赋值运算符
            2. 如果一个类需要拷贝构造函数，那么一定需要拷贝赋值运算法，反之亦然
            /* =default */
            1. 显示要求使用析构/拷贝构造/拷贝赋值函数:
                  Hasptr(const Hasptr& ) =default
                  ~HasPtr() =default
                  Hasptr& operator=(const Hasptr& ) =default
            2. =default是内联函数，如果不想要内联，就在类外定义

            /* =delete */
            1. 阻止赋值，作用就是提醒我们不希望定义这些成员！ 
                  Hasptr& operator=(const Hasptr& ) = delete
            2. 其他函数也能用=delete，但是析构函数不要删除，否则就无法销毁对象了
            3. 合成的函数可能是删除的，其规则是： 
                  这个类里面的成员不能构造、拷贝或者销毁（比如析构函数是privete
                  或者是被删除了的）
                  如果有const成员，则拷贝赋值运算符是删除的（因为const不可能被
                  赋值）
            /* 拷贝控制 */
            /* 自定义swap */
            这里知道swap自定义，交换指针指向的而不用临时变量，但是std::swap那里没懂
            13.4 13.5 看不懂

            /* 对象移动 */
            1. 右值、左值引用：
                  右值引用 : int && a=4 (yes), int &&a =b (no), int &&a = b*3(yes)
                            int && a=move(b) (yes)
            2. 意义：例如vector重新分配内存，从旧内存上面       拷贝到新内存很费时间且不必要，更好
                    的方式是采用移动