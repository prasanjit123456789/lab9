/*Contrary to Exercise 5, here, we want to show string repeatedly by shifting top character of string from right to left. Refer to a below execution example. Write a below source code, complement the expression hidden by "******" to meet this requirement.*/
//define library
#include<iostream>
#include<stdio.h>
using namespace std;
//define main function
int main(void){
	//define string
	char str[20];
	//ask the user about the characters
	cout<<"Give the characters."<<endl;
	cin>>str;
	//use loop to print many times
	for(int i=20;i>0;i=i-1){
		for(int n=i-1;n<20;n++){
			cout<<str[n];
		}
		cout<<endl;
	}	
	return (0);
}
