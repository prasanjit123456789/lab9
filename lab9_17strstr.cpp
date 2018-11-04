/*self implementation of strstr function*/
//define library
#include<iostream>
#include<cstring>
using namespace std;
//define strby function
char *strby(char a1[],char a2[]){
	//define varibles
	int i=0,n=0,p=1,q;//char l='m';
	//find the character from which is same as a2 in a1
	while(a1[i]!='\0'){i++;}
	while(a2[n]!='\0'){n++;}
	int y=n;
	//condition if the elements of a2 is grater than a1
	if(i<n){return NULL;}
	else{
		for(int a=0;a<i;a++){
			for(int b=a;b<a+n;b++){
				
				if(a1[b]!=a2[b-a]){p=0;
				}
				else{p=1;}
			}
			//condition for stopping
			if(p!=0) break;
			else q=a; 
		}
		//return the value
		return &a1[q+1];
	}
}
//define main function
int main(){
	char ar1[]="my name is prasanjit";
	char ar2[]="name";
	//call by strby function that will act as strstr function
	cout<<strby(ar1,ar2);
	
	return 0;
}
