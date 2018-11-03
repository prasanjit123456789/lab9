/*implementation of strcat*/
//define library
#include<iostream>
#include<cstring>
using namespace std;
//define composefunction
char *compose(char ar1[],char ar2[]){
	//define variables
	int n=0;int i=0;int c=0;int d=1;
	//use loop for number of characters in ar1
	while(ar1[i]!='\0'){n=n+1;i++;}
	//use loop for the number of elements in second string
	while(ar2[c]!='\0'){d=d+1;c++;}
	//use loop for compose
	int m=n;
	while(m<=n+d){ar1[m]=ar2[m-n];m++;}
	return ar1;
}
//define main function
int main(){
	//define two strinngs
	char s1[20]="Hello";
	char s2[20]="World";
	//call by compose function to act as strcat
	compose(s1,s2);
	cout<<s1;
	return 0;
}
