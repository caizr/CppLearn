
/* 5-9 使用一系列if语句统计从cin输入的文本中有多少元音字母 */
#include<iostream>
#include<string>
int main(){
    using namespace std;
    string s1;
    cout<<"type string"<<endl;
    getline(cin,s1);            //输入字符串，接收空格！
    unsigned vowelCnt=0;        //统计元音的数量
    for(int i=0;s1[i]!='\0';++i){
        if (s1[i] == 'a')
            ++vowelCnt;
        else if(s1[i] == 'e')
            ++vowelCnt;
        else if(s1[i] == 'i')
            ++vowelCnt;
        else if(s1[i] == 'o')
            ++vowelCnt;
        else if(s1[i] == 'u')
            ++vowelCnt;
        continue;
    }
    cout<<"manner 1:"<<vowelCnt<<endl;

    vowelCnt=0;
    /* 5-10 刚才的程序哟一个问题，就是只会统计小写不会统计大写的，
       现在大写的元音字母也要考虑在内 */
    for(int i=0;s1[i]!='\0';++i){
        if (s1[i] == 'a' || s1[i] == 'A')
            ++vowelCnt;
        else if(s1[i] == 'e' || s1[i] == 'E')
            ++vowelCnt;
        else if(s1[i] == 'i' || s1[i] == 'I')
            ++vowelCnt;
        else if(s1[i] == 'o' || s1[i] == 'O')
            ++vowelCnt;
        else if(s1[i] == 'u' || s1[i] == 'U')
            ++vowelCnt;
        continue;
    }
    cout<<"manner 2:"<<vowelCnt<<endl;

    /* 5-11 统计空格，制表符，换行符的数量 */
    vowelCnt=0;
    for(int i=0;s1[i]!='\0';++i){
        if (s1[i] == ' ')
            ++vowelCnt;
        else if(s1[i] == '\t')
            ++vowelCnt;
        else if(s1[i] == '\n')          // getline无法接收回车符
            ++vowelCnt;
        continue;
    }
    cout<<"manner 3:"<<vowelCnt<<endl;
    char s2;
    while(cin>>c2);
    cout<<c2<<endl;
}