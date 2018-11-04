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


void strcat(char *a, char *b){
	//copying the array a to array b
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

void strcmp(char *a, char *b){
	int m ;
	//comparing the array a to array b
	for (int i = 0;i<50;i++){
		if((int)*a==(int)*b){
			m=0;
		}
		else{
			m=2;
			break;
		}
	}
	if(m==0){
		cout<<"The strings "<<a<<" and "<<b<<" are equal "<<endl;
	}
	else{
		cout<<"The strings "<<a<<" and "<<b<<" are not equal "<<endl;
	}

}

void strchr(char *a,char m){
	int n=(int)m;
	for(int i=0;i<50;i++){
		if(n==(int)a[i]){
			cout<<"Found at "<<i+1<<endl;
		}
		if(*a='\0'){
		break;
		}
		else{
		continue;
		}
	}
}

int main(){
	char m;
	char p[50] = "Good morning";
	char q[50];
	char r[50] = " to everybody";
	//calling for function
	strcpy(p,q);
	cout << q<< endl;
	strcmp(p,q);
	strcmp(p,r);
	strcat(p,r);
	cout << p<< endl;
	cout<<"The string 'p' is "<<p<<endl;
	strlen(p);
	cout<<"Type a letter in the string "<<p<<" : ";
	cin>>m;
	strchr(p,m);
	return 0;
}
