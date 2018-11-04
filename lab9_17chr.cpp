/*the self implementation of strchr*/
//define library
#include<iostream>
#include<cstring>
using namespace std;
//define chr function
char *chr(char ar[],char p){
	//define variables
	int i=0,c;int n=0;
	char ar2[20];
	//knowing the number of elements in the string
	while(ar[n]!='\0'){
		n++;
	}
	//finding the character in the string by loop
	while(ar[i]!='\0'){
		if(ar[i]==p)
		break;
		else c=i; 
		i++;
	}
	return &ar[i];

}
//define main function
int main(){
	//define strings
	char s1[]="Hello";
	char *tr=s1;
	//call by chr function that acts as strchr function
	chr(s1,'l');	
	return 0;
}
