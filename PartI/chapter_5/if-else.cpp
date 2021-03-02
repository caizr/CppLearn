/* if-else 语句*/
#include<iostream>

int main(){
    using namespace std;
    int i1;
    cout<<"type number"<<endl;;
    cin>>i1;
    if (i1<5){                      //条件1
        cout<<"smaller than 5";
    }
    else if(i1==5){                 //条件2
        cout<<"equal to 5";
    }
    else                            //条件3
        cout<<"larger than 5";
    return 0;
}