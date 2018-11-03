/* [STRING] Create a string and store your name in it. Use a loop to print string character by character using the normal index method as well as the pointer method. */
//define library
#include<iostream>
using namespace std;

int main(){
	//define character array and input your name
	char nam[]={'P','r','a','s','a','n','j','i','t',' ','B','e','h','e','r','a','\0'};
	//number of elements in the array
	int n=sizeof(nam)/sizeof(nam[0]);
	//define pointer
	char *p=nam;
	//use loop to print your name	
	cout<<"My name is ";
	for(int i=0;i<n;i++){
		cout<<nam[i];
	}
	cout<<"  (In index method)"<<endl;
	for(int i=0;i<n;i++){
		cout<<*(p+i);
	}
	cout<<"     (pointer method)"<<endl;
	return 0;
}
