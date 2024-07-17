
#include <stdio.h>

void Check_Nth_Bit(int num, int bit_no);

int main()
{
	int number, bit_number;
	
	printf("Enter any number: ");
	scanf("%d",&number);
	
	printf("Enter ntn bit to check (0-31): ");
	scanf("%d",&bit_number);
	
	Check_Nth_Bit(number,bit_number);
	
	return 0;
}

void Check_Nth_Bit(int num, int bit_no)
{
	int bit_value;
	
	bit_value = ((num >> bit_no)&1);
	
	printf("The bit %d is set to %d\n",bit_no ,bit_value);
}