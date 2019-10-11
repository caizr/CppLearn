/* 
 *
 *
 *
 *
 *
 */
#include<iostream>
using namespace std;
class Sales_data {
public:
	string name;
	int solds=0;
	double revenue=0.0;
};
int main(){
	Sales_data b1;
	b1.name="caizr";
	cout<<b1.name<<endl;
	return 0;
}
