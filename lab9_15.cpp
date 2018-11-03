/*We want to show string repeatedly by shifting top character of string to right. Refer to a below execution example. Write a below source code, complement the expression hidden by "******" to meet this requirement. */
//define library
#include<iostream>
#include<stdio.h>
using namespace std;

int main(void){
	//declaire string
	char str[20];
	//ask user about the input
	cout<<"Give characters for the string."<<endl;
	cin>>str;
	//loop for printing many times 
	for(int i=1;i<21;i++){
		//loop for printing without the left
		for(int n=i-1;n<20;n++){
			cout<<str[n];
		}
		cout<<endl;
	}
	return (0);
}
