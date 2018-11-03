/*Write a function myStrLen(char*) which returns the length of the parameter cstring.  Write the function without using the C++ function strlen.*/
//define library
#include<iostream>
#include<cstring>
using namespace std;
//define myStrLen function
int myStrLen(char *s){
	//define variable
	int n=0;
	//find the length of the string by using loop
	while(*(s+n)!='\0'){n++;}
	return n+1;
}
//define main function
int main(){
	//define string
	char ar[]="Hello World";
	//callby myStrLen function to find the length
	myStrLen(ar);
	return 0;
}
