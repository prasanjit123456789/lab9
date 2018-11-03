/*self implementation of strstr function*/
//define library
#include<iostream>
#include<cstring>
using namespace std;
//define strby function
char *strby(char a1[],char a2[]){
	//define varibles
	int i=0,n=0,p=0,q;
	//find the character from which is same as a2 in a1
	while(a1[i]!='\0'){i++;}
	while(a2[n]!='\0'){n++;}
	for(int a=0;a<n;a++){
		for(int b=a;b<a+n;b++){
			if(a1[b]==a2[b]){
				p=p+1;
			}
			else{}
		}
		if(p!=n) break;
		else q=a+1; 
	}
	char *pi=&a1[q];
	return pi;
}
//define main function
int main(){
	char ar1[]="my name is prasanjit";
	char ar2[]="name";
	cout<<strstr(ar1,ar2)<<endl;
	//call by strby function
	cout<<strby(ar1,ar2);
	return 0;
}
