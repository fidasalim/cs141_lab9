//including library
#include<iostream>
using namespace std;
void strcpy(char *p, char *q){
	//copying the array p to array r
	while (*p){
		*q = *p;
		p++; 
		q++;
		}
}

int main(){
	char p[13] = "Good Morning";
	char q[13];
	//calling for function
	strcpy(p,q);
	cout << q<< endl;
	return 0;
}
