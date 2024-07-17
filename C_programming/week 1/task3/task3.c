/*Write a program that asks the user to enter a dollars and cents amount, then display the
amount with 5% tax added:
INPUT: Enter an amount: 100.00
OUTPUT: With tax added : $ 105.00*/
#include<stdio.h>
int main(){
	float num;
	printf("Enter an amount:");
	scanf("%f",&num);
	printf(" With tax added : %.2f",num+.05*num);
	return 0;
}