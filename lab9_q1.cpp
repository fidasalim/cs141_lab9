//including library
#include <iostream>
using namespace std;

int main(){
//predefing variables
//integer variable
	int a;int *p =&a; cout<<"The sizes of integer variables are "<<sizeof(a)<<endl<<"The sizes of integer pointer variables are "<<sizeof(p)<<endl;
//character variable
	char b;char *q =&b;cout<<"The sizes of character variables are "<<sizeof(b)<<endl<<"The sizes of character pointer variables are "<<sizeof(q)<<endl;
//float variable
	float c;float *r =&c;cout<<"The sizes of float variables are "<<sizeof(c)<<endl<<"The sizes of float pointer variables are "<<sizeof(r)<<endl;
//double variable
	double d;double *s =&d;cout<<"The sizes of double variables are "<<sizeof(d)<<endl<<"The sizes of double pointer variables are "<<sizeof(s)<<endl;
//boolean variable
	bool e;bool *t =&e;cout<<"The sizes of boolean variables are "<<sizeof(e)<<endl<<"The sizes of boolean pointer variables are "<<sizeof(t)<<endl;

return 0;
}


