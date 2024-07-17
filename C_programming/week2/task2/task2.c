//Write a C code that asks the user to enter a number and check if it is an Even or Odd.
#include<stdio.h>
int main(){
	 float num;
	 printf("enter num");
	 scanf("%f",&num);
	float z=num/2;
	int zint=(int)z;
	if(z==zint){
		printf("%.2f is even num",num);
		}
	else{
		printf("%.2f is odd num",num);
		}
}