/**
 ******************************************************************************
 * @file           : 5.c
 * @author         : Mostafa Edrees
 * @brief          : write C Program to find maximum and minimum of 
 *					 4 numbers using functions.
 * @date           : 13/5/2023
 ******************************************************************************
**/

#include <stdio.h>

void Find_MAX_MIN_OF_4Numbers(int,int,int,int);

int main()
{
	int num1, num2, num3, num4;
	
	printf("Enter 1st Number: ");
	scanf("%d",&num1);
	
	printf("Enter 2nd Number: ");
	scanf("%d",&num2);
	
	printf("Enter 3rd Number: ");
	scanf("%d",&num3);
	
	printf("Enter 4th Number: ");
	scanf("%d",&num4);
	
	Find_MAX_MIN_OF_4Numbers(num1,num2,num3,num4);
	
	return 0;
}

void Find_MAX_MIN_OF_4Numbers(int N1,int N2,int N3,int N4)
{
	int max, min;
	
	max = (N1 > N2)? (N1 > N3)? (N1 > N4)? (N1) : (N4) : (N3 > N4)? (N3) : (N4) : (N2 > N3)? (N2 > N4)? (N2) : (N4) : (N3 > N4)? (N3) : (N4);
	min = (N1 < N2)? (N1 < N3)? (N1 < N4)? (N1) : (N4) : (N3 < N4)? (N3) : (N4) : (N2 < N3)? (N2 < N4)? (N2) : (N4) : (N3 < N4)? (N3) : (N4);
	
	printf("\n");
	printf("Maximum Number = %d\n",max);
	printf("Minimum Number = %d\n",min);
}