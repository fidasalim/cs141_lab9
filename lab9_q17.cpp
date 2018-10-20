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
}//including library
#include<iostream>
using namespace std;
void strcpy(char *p, char *q){
	//copying the array p to array r
	while (*p){
		*q = *p;
		p++; 
		q++;
		}
	*q = '\0';	
}
void strcat(char *a, char *b){
	//copying the array p to array r
	for (int i = 0;i<50;i++){
	    if(i<12){
	        *a=*a;
	    } 
	    else{
	        *(a+i)=*b;
	        b++;
	    }
	}
	
}
void strlen(char *p){
    char m;
    //defining the length of a string
    for(int i=0;i<50;i++){
        m =*(p+i);
        if(m=='\0'){
            cout<<"THe length of the string p is "<<i<<endl;
            break;
        }
    }
    
}

int main(){
	char p[13] = "Good Morning";
	char q[13];
	char a[50] = "Good Morning";
	char b[50] = " to everybody";
	//calling for function
	strcpy(p,q);
	cout << q<< endl;
	strcat(a,b);
	cout <<a<< endl;
	return 0;
}

void strcat(char *p, char *r){
	//copying the array p to array r
	for (int i = 0;i<50;i++){
	    if(i<12){
	        *p=*p;
	    } 
	    else{
	        *(p+i)=*r;
	        r++;
	    }
	}
	
}

int main(){
	char p[13] = "Good Morning";
	char q[13];
	char r[50] = " to everybody";
	//calling for function
	strcpy(p,q);
	cout << q<< endl;
	strcat(p,q);
	cout << p<< endl;
	cout<<"The string 'p' is "<<p<<endl;
	strlen(p);
	return 0;
}
