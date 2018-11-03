/*implementation of strcmp by own way    operator precidence associativity*/
//define library
#include<iostream>
#include<cstring>
using namespace std;
//deffine compare function
int compare(char ar1[],char ar2[]){
	//define variables
	int i=0;int n=0;int p=0;int q=0;int b,d,c,e,f=0;
	//use loop for knowing the number of elements
	while(ar1[i]!='\0'){n=n+1;i++;}
	while(ar2[f]!='\0'){q=q+1;f++;}
	//use loop in condition to know how much greater		
	if(q==n){
		for(int a=0;a<n;a++){
			b=ar1[a]-ar2[a];
			if(b!=0 || ar1[a]=='\0')
			break;
			else e=a;
			//e=a;
					
		}
		return ar1[e+1]-ar2[e+1];//ar1[e+1]-ar2[e+1]; 
	}

	else if(q>n){
		for(int a=0;a<q;a++){
			c=ar1[a]-ar2[a];
			if(c!=0 || ar1[a]=='\0')
			break;
			else 
			e=c;
		}	
	return ar1[e+1]-ar2[e+1];	
	}
	else{
		for(int a=0;a<n;a++){
			d=ar1[a]-ar2[a];
			if(d!=0 && ar2[a]=='\0')
			break;
			else
			e=d;
		}
	return ar1[e+1]-ar2[e+1];
	}	
	
}
//define main function
int main(){
	//define string
	char s1[]="Hello";int p;
	char s2[]="Hebblo";
	//call by compare function
	cout<<compare(s1,s2)<<endl;
	cout<<strcmp(s1,s2)<<endl;
	//cout<<p;
	
	return 0;
}
