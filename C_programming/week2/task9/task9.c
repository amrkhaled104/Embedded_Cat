//Write a C to calculate the factorial of an integer entered by the user using a while loop.
#include<stdio.h>
int main (){
	int num,fact=1;
	printf("enter number:");
	scanf("%d",&num);
	while(num>0){
		fact*=num;
		num--;	
	}
	printf("fact = %d",fact);
}