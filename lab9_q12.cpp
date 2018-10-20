//including library
#include <iostream>
using namespace std;

int main(){
	//integer variable
	int a =2,b=3;
	int *p;
	p=&a;
	b=*p;
	//print a
	cout<<a<<endl;
	//print b
	cout<<b<<endl;
	//print p
	cout<<*p<<endl<<"88888888888888888888888"<<endl<<endl;
	a =2,b=3;
	//assigning pointer p to b
	p=&b;
	//print a
	cout<<a<<endl;
	//print b
	cout<<b<<endl;
	//print p
	cout<<*p<<endl;
return 0;
}


