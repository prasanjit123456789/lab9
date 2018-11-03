/*Write a program to declare variables of all predefined sizes and declare corresponding pointers (of all predefined types). Print out the sizes of each of variables and pointer variables. (Hint: use sizeof )*/
//define library
#include<iostream>
using namespace std;

int main(){
	//all variables
	int i;bool b;char c;float f;long l;double d;
	int *p=&i;bool *q=&b;float *r=&f;long *s=&l;double *t=&d;
	cout<<"sizeof i="<<sizeof(i)<<endl;
	cout<<"sizeof b="<<sizeof(b)<<endl;
	cout<<"sizeof c="<<sizeof(c)<<endl;
	cout<<"sizeof f="<<sizeof(f)<<endl;
	cout<<"sizeof l="<<sizeof(l)<<endl;
	cout<<"sizeof d="<<sizeof(d)<<endl;
	cout<<"sizeof p="<<sizeof(p)<<", sizeof *p="<<sizeof(*p)<<endl;
	cout<<"sizeof q="<<sizeof(q)<<", sizeof *q="<<sizeof(*q)<<endl;
	cout<<"sizeof r="<<sizeof(r)<<", sizeof *r="<<sizeof(*r)<<endl;
	cout<<"sizeof s="<<sizeof(s)<<", sizeof *s="<<sizeof(*s)<<endl;
	cout<<"sizeof t="<<sizeof(t)<<", sizeof *t="<<sizeof(*t)<<endl;
	return 0;
}
