/*Give the value of the left-hand side variable in each assignment statement. Assume the lines are executed sequentially. Assume the address of the blocks array is 4434.*/
//include library
#include<iostream>
#include<cstring>
using namespace std;

//define main functon
int main()
{
   char blocks[3] = {'A','B','C'};
   char *ptr = &blocks[0];
   char temp;
   
   temp = blocks[0];
   temp = *(blocks + 2);
   temp = *(ptr + 1);
   temp = *ptr;

   ptr = blocks + 1;
   temp = *ptr;
   temp = *(ptr + 1);

   ptr = blocks;
   temp = *++ptr;
   temp = ++*ptr;
   temp = *ptr++;
   temp = *ptr;

   return 0;
}
