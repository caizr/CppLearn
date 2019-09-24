/*******************
 * Revise the program you wrote for
 *  the exercises in § 1.4.1 that
 *   printed a rang e of numbers so 
 *   that it handles input in which
 *   the first number is smaller than 
 *   the second.
 *******************/
#include<iostream>
using namespace std;
int main(){
	int v1,v2=0;
	cout<<"type two numbers: "<<endl;
	cin>>v1>>v2;
	if(v1>=v2){
		for(;v2<=v1;++v2) cout<<v2<<endl;
	}
	else  {
		for(;v1<=v2;++v1) cout<<v1<<endl;
	}
	return 0;
}


