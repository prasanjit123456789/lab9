/*Write a function countEven(int*, int) which receives an integer array and its size, and returns the number of even numbers in the array.  */
//define variables
#include<iostream>
using namespace std;
//define countEven function
int countEven(int *s,int p){
	//define variables
	int m=0;
	//for the number of even numbers
	for(int i=0;i<p;i++){
		//use condition for number of even numbers
		if(*(s+i)%2==0){m=m+1;}
		else{}
	}
	return m;
}
//define main function
int main(){
	//define array
	int ar[]={1,8,5,6,2,9,7,19,49};
	//define the length of the array
	int n=sizeof(ar)/sizeof(ar[0]);
	//call by the countEven functon
	countEven(ar,n); 
	return 0;
} 
