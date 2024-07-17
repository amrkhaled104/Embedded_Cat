/*Write a C code defines an int initialized with 10, then print it, then define a pointer that
points to that int and change the value of the int through the pointer to be 20, then print
it again.*/
#include<stdio.h>



int main()
{
     
	 int x=10;
	 printf("%d\n",x);
     
	 int * ptr = &x;
	 *ptr=20;
	 
	 printf("%d",x);

}