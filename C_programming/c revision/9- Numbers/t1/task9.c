#include<stdio.h>
void convert(long long bin ,long long *dec)
{
	
	int p=0;
	while(bin!=0)
	{
		int power=p;
		long long Power_Number = 1;
		//printf("p%d\n",power);
		while(power)
		{
			Power_Number *= 2; 
			power--;
		}
		//printf("pn%d\n",Power_Number);
		p++;
		*dec+=Power_Number*(bin%10);
		bin/=10;
		//printf("%lld\n",*dec);
		
	}
}
int main()
{
	long long bin,dec;
	printf("enter binary number");scanf("%lld",&bin);
	convert( bin ,&dec);
	printf("Decimal Number: %lld\n",dec);


}