#include<stdio.h>
#include<stdlib.h>
void main(void)
{
	int *ptr;int n = 0,x = 0,ts,max,min;
	printf("enter the size of your array : ");
	scanf("%d",&n);
	ts = n;
	ptr = (int*) malloc(n * sizeof(int));
	if(ptr != NULL)
	{
		int i = 0;
		lab :
		for( ;i< ts;i++)
		{
			printf("enter element-%d : ",i+1);
			scanf("%d",ptr+i);
		}
		
		printf("do you want to add more elements(enter how many element you need more)if no enter '0' : ");
		scanf("%d",&x);
		ts+=x;
		if(x)
		{
			ptr = (int*) realloc(ptr,ts * sizeof(int));
			goto lab;
		}
		max = min = *(ptr+i);
		for(int j = 0;j < ts ;j++)
		{
			if(max < *(ptr+j))
				max = *(ptr+j);
			if(min > *(ptr+j))
				min = *(ptr+j);
		}
		printf("the maximum value is %d\nthe minimum value is %d",max,min);
		
	}
	else{printf("memory not available");}
	
}