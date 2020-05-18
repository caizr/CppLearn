/* 判断string对象是否有大写字母，并把string对象全部改成小写形式 */
#include<iostream>
#include<string>
using namespace std;

void ToLow(string &s){
    /* 使用迭代器*/
    int i=0;
    for(char c:s){
        // 答案用的是 auto c:s
        if(c>='A' && c<='Z')
            s[i]+=32;
        else if(c>='a'&& c<='z' || c==' ')
            ;//暂时不做任何处理
        else
            s[i]='?';
        ++i;
    }
    /* 还有一个地方要改进：
        使用 for(auto &c :s)
    这样做就不需要用过i来标记了 */
}

int main(){
    string s="This is STriNG Object";
    cout<<s<<endl;
    ToLow(s);
    cout<<s<<endl;
    return 0;
}