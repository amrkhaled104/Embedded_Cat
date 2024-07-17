/*Write a C code to ask the user to enter two numbers, then the main function will call a
function named Get_Max that takes the two values entered by the user then returns the
maximum of them.
The main function will print the returned value.*/
#include<stdio.h>
int Get_Max(int,int);
int main(){
	int num1,num2;
	printf("enter num1 then num2:\n");
	scanf("%d%d",&num1,&num2);
	printf("%d is max",Get_Max(num1,num2));
}
int Get_Max(int num1,int num2){
	if(num1>num2){
		return num1;
	}
	else{
		return num2;
	}
	
	
}