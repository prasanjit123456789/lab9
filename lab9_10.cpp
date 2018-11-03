/*Write a function revString(char*) which reverses the parameter cstring.  The function returns nothing.  You may use C++ string handling functions in <cstring> in the function if you wish.*/
//include library
#include<iostream>
#include<cstring>
using namespace std;
//define the revtString function
void revString(char* ptr){
	//the number of elements in the string
	int i=0;char ar[20];
	while(*(ptr+i)!='\0'){i++;}
	//define another string that stores the value of the pointer by loop
	for(int n=0;n<i;n++){
		ar[n]=*(ptr+i-n-1);
	}
	//assign the null character
	ar[i]='\0';
	//print the reverse string
	cout<<ar;
	
}
//define main function
int main(){
	  char s[10] = "abcde";
	  revString(s);  // call the function
	  //cout<<s;
	  return 0;
}

