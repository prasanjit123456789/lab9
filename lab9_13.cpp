/*Create an array of size 10. Use a loop to print array using the normal index method as well as the pointer method. */
//define library
#include<iostream>
using namespace std;

int main(){
	//define array
	int ar[10]={1,3,8,9,10,13,26,30,35,50};
	//define pointer
	int *p=ar;
	cout<<"By index method."<<endl;
	//using loop for index method
	for(int i=0;i<10;i++){
		//printing in index
		cout<<"ar["<<i<<"]="<<ar[i]<<endl;
	}
	//by pointer method
	cout<<"By pointer method."<<endl;
	//using loop for pointer method
	for(int i=0;i<10;i++){
		//printing pointer
		cout<<"*(p+"<<i<<")="<<*(p+i)<<endl;
	}
	return 0;
}
