//Write a C code swap two global variables through a function.
#include<stdio.h>
int num1,num2;
void swap();
int main(){
	printf("enter num1 num2\n");
	scanf("%d%d",&num1,&num2);
	printf("before swaping \n num1=%d num2=%d\n",num1,num2);
	swap();
	printf("after swaping \n num1=%d num2=%d",num1,num2);	
}
void swap(){
	//1
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	/*"2"
	at x=num1 ,y=num2
	x=x^y;
	y=x^y;
	x=x^y;*/
	/*"3"
	x=x*y;
	y=x/y;
	x=x/y;*/
	}