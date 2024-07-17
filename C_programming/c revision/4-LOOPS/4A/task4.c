#include<stdio.h>
int main()
{
	int num,sum=0;
	printf("enter number");scanf("%d",&num);
	while(num!=0)
	{
		sum+=num%10;
		num/=10;
	}
	printf("Sum=%d",sum);
}