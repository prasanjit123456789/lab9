/*Write a piece of code which prints the characters in a cstring in a reverse order.

char s[10] = "abcde";
char* cptr;

// WRITE YOUR CODE HERE
*/
//include library
#include<iostream>
#include<cstring>
using namespace std;

//define main function
int main(){
	char s[10] = "abcde";
        char* cptr=s;int i=0;
	//find the length of the string to 
	while(*(cptr+i)!='\0'){i++;}
	//print the reversr by using loop
	for(int n=i;n>=0;n--){
		cout<<*(cptr+n);
	}
	return 0;
}
