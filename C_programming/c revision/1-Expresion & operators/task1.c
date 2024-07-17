#include<stdio.h>
int main()
{
	int num,c0=0,c1=0;
	printf("Enter any number:"); scanf("%d",&num);
	int i=32;
	while(i--)
	{
		if((num&1)==1){
			c1++;
			num>>=1;
	}
	else {
		c0++;
		num>>=1;
	}
    }
	printf("TOTAL ZEROS BIT:%d\nTOTAL ONES BIT: %d",c0,c1);
}