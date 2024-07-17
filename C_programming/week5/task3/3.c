/*Write a C code that defines 2 arrays, and sends them to a function that applies scalar
multiplication between the two arrays and returns the result, the main function then will
print the result.
*/
#include<stdio.h>
 
void mularray(int arr1[],int arr2[],int mul[],int size)
{
	
	for(int i=0;i<size;i++)
	{
		
		mul[i]=arr1[i] * arr2[i];
		 
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
	
	int arr1[size];
	printf("enter elements of arr1:\n");
	enterarr(arr1,size);
	
	printf("enter elements of arr2:\n");
	int arr2[size];
	enterarr(arr2,size);
	
	printf("mul\n");
	int mularrays[size];
    mularray(arr1,arr2,mularrays,size);
	
	 for(int i=0;i<size;i++)
		{
			
			printf("%d ",mularrays[i]);
			
		}
			
}