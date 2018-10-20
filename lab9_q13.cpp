//including library
#include <iostream>
using namespace std;

int main(){
	int arr[10]={1,4,7,9,13,46,56,8,9,3};
	//printing the array
	//using  the normal index method
	for(int i=0;i<10;i++){
		cout<<arr[i]<<",";
		}
	cout<<endl;
	//using the pointer method
	int *p= arr;
	for(int i=0;i<10;i++){
		cout<<*(p+i)<<",";
		}
return 0;
}
