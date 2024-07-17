/*
Write a C code that defines a function which takes an array as input argument and apply
the bubble sorting algorithm on it, then prints the result.
*/
#include<stdio.h>

void bubble_sort(int arr[],int size)
{
	int i=size;
	while(i>0)
	{
		for(int i=0;i<(size-1);i++)
		{
			if(arr[i+1]<arr[i])
			{
				int temp = arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=arr[i];
			}
			
		}
		i--;
	}
	
	
}

void enterarr(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		
		scanf("%d",&arr[i]);
		
	}
	
}

int main()
{
	int size;
	printf("enter size:");
	scanf("%d",&size);	
	
	int arr[size];
	enterarr(arr,size);
	
	printf("arr before:\n");
	
		for(int i=0;i<size;i++)
		{
			
			printf("%d ",arr[i]);
			
		}
	
	bubble_sort(arr,size);
	
	printf("\narr after:\n");
	
		for(int i=0;i<size;i++)
			{
				
				printf("%d ",arr[i]);
				
			}
		
		
}