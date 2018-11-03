/*Write a function contains(char*, char) which returns true if the 1st parameter cstring contains the 2nd parameter char, or false otherwise.*/
//include library
#include<iostream>
#include<cstring>
using namespace std;
//define contains function
bool contains(char *s1,char ch){
	//define variables
	int i=0;int p;
	//know the number of characters int the string by loop
	while(*(s1+i)!='\0'){i++;}
	bool b,c;
	//by loop match the character with the characters of thestring
	for(int n=0;n<i+1;n++){
		b=(*(s1+n)==ch);
	//use condition for stopping
		if(b!=0 || *(s1+n)=='\0')
		break;
		else p=n;
	}
	//assign the truth value if it matches
	b=(*(s1+p+1)==ch);
	//return the bool value
	return b;

}
//define main function
int main(){
	//define array
	char ar[20];char chr;
	//ask the user to give the string and the character
	cout<<"Give the string value and the the character-";
	cin>>ar>>chr;
	//if character is in it or not
	cout<<"If the character is inside it then the result is 1 otherwise 0."<<endl;
	//call by contains function
	cout<<contains(ar,chr);
	return 0;
}
