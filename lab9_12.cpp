/*Write a program to declare two variables a,b and a pointer variable p (all integer type). Try to understand pointers while doing this.
Point p to a. And store the value pointed by p in b. Print the values of a, b and *p.
Assign values a=2 and b = 3. Print the values of a, b and *p.
Now point p to b. Print the values of a, b and *p.*/
//define library
#include<iostream>
using namespace std;

int main(){
	//define variable
	int a,b;
	a=2;b=3;
	int *p=&a;
	//b=p;
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	cout<<"The point is p to a, *p="<<*p<<endl;
	*p=b;
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	cout<<"The point is p to b, *p="<<*p<<endl;

	return 0;
}
