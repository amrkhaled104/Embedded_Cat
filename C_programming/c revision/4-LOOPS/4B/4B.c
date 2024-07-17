#include <stdio.h>

long long Calc_Power_OF_Number(int num,int power);

int main()
{
	long long power_of_number;
	int number, power;
	
	printf("Enter the number: ");
	scanf("%d",&number);
	
	printf("Enter a power: ");
	scanf("%d",&power);
	
	power_of_number = Calc_Power_OF_Number(number,power);
	
	printf("%d ^ %d = %lld\n",number ,power ,power_of_number);
	
	return 0;
}

long long Calc_Power_OF_Number(int num,int power)
{
	long long Power_Number = 1;
	
	while(power)
	{
		Power_Number *= num; 
		power--;
	}
	
	return Power_Number;
}