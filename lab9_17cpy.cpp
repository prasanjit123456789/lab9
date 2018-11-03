/*Copy one string to another*/
//include library
#include<iostream>
#include<cstring>
using namespace std;
//defin copy function
char *copy(char *a1,char *a2){
	//define elements in string to be copied
	int n=sizeof(a1)/sizeof(a1[0]);
	//copy the a1 to a2 by loop
	for(int i=0;i<n;i++){
		a2[i]=a1[i];
	}
	return a2;
}
//define main function
int main(){
	//define string
	char s1[]="Hello";
	char s2[20];
	//call by copy function to copy
	copy(s1,s2);
	return 0;
	
}
