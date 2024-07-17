/*Write a C code that asks the user to enter 3 numbers, the program will print the
maximum number of them.*/
#include<stdio.h>
int main(){
	float num1,num2,num3;
	printf("enter num1:");
	scanf("%f",&num1);
	printf("enter num2:");
	scanf("%f",&num2);
	printf("enter num3:");
	scanf("%f",&num3);
	if(num1>num2){
		if(num1>num3){
			printf("num1 is maximum");
		}
		else{printf("num3 is maximum");
		}
	}
	else{ 
	if(num2>num3){
		printf("num2 is maximum");
		}
		else{
			printf("num3 is maximum");
		}
	}
}