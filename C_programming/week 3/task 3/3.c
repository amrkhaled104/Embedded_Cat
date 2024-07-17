//Write a C code that gets the number of the digits in a given number.
#include<stdio.h>

int num_digit(int);
int main(){
	int num;
	printf("enter number");
	scanf("%d",&num);
printf("number of digit is %d",num_digit(num));

}
int num_digit(int num){
	if(num<0)
	{
	num=num*-1;	
	}
	if(num==0)
	{ 
	    return 1;
	}
	else
	{
	  int count=0;
	while(num>0)
	{
		num/=10;
		count++;

	}
	return count;
	}
}