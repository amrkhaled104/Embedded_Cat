//Write C code to read 10 numbers from the user and find their summation and average.
#include<stdio.h>
int main(){
	int sum=0;
	for(int i=1; i<=10;i++){
		int num=0;
		printf("enter number%d:",i);
		scanf("%d",&num);
		sum+=num;
	}
	float avr=(float)sum/10;
	printf("sum=%d\navr=%.2f",sum,avr);
	
}