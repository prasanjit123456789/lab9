//length of a sting
//define library
#include<iostream>
#include<cstring>
using namespace std;
//define length function
int length(char s1[]){
	//define variables
	int n=1;int i=0;
	//use whle loop for 
	while(s1[i]!='\0'){n=n+1;i++;}
	return n;
}
//define main function
int main(){
	//define string
	char s1[]="Hello World";
	//call by length function
	length(s1);
	return 0;
}
	

