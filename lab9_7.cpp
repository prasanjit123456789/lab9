/*Write a function that returns a pointer to the maximum value of an array of double's.  If the array is empty, return NULL.

  double* maximum(double* a, int size);*/
//define library
#include<iostream>
using namespace std;
//define maximum function
double *maximum(double *s,int size){
	//define variable
	double l=*s;
	//define the return in the conditions
	if(size==0){return NULL;}
	else{
		//use loop to assign the maximum
		for(int i=0;i<size;i++){
			//use condition to know when it will assign
			if(*(s+i)>l){l=*(s+i);}
			else{}
			
		}
		double *a=&l;
		return a;	
	}
}
//define main function
int main(){
	//define array
	double ar[]={1.2,5.6,8.0,4.9,6.8,7.9,1.5,2.7};
	//find the sizeof the array
	int n=sizeof(ar)/sizeof(ar[0]);
	//call by by maximum function and assigning to address
	maximum(ar,n); 
	return 0;
}
