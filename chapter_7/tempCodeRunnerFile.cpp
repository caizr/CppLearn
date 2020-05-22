        Person() =default;
        //第二种形式
        Person(const string &s):strName(s) {}
        // 第三种形式
        Person(const string &s,const string &add,
                const string &isbn, const double &p):
                strName(s),strAddress(add),ISBN(isbn),
                price(p){}
