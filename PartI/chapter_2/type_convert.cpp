#include<iostream>
using namespace std;
int main(){
	unsigned char a = -4;//unsigned char a = -1+256;
//	signed char b=256;
	cout<<int(a)<<endl;
//	cout<<int(b)<<endl; //ERROR, overflow!
	return 0;
}
/*
 *         NOTICE: If we assigned an out-of-range value to an object of unsigned type,
 *         	   the  result is the remainder of value modulo the number of values 
 *         	   the target type can hold.
 *         	   If we assigned an out-of-range value to an object of signed type,
 *         	   the result is undefined.
 *         	  
 */
