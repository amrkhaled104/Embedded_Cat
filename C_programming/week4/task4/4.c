/*Write a C code to find the repeating element in a given array through a function. The
function takes the array and returns the element.*/
#include<stdio.h>
void enter_arr(int arr[],int size)
{
  printf("Enter elements of array:");
  for(int i=0;i<size;i++)
  {
	  scanf("%d",&arr[i]);
  }  
}
void repeted(int arr[],int size)
{
	for(int i=0;i<size;i++)
 	{ 
        for(int j=i+1;j<size;j++)
		{
			if(arr[i]==arr[j])
			{
				printf("%d ",arr[i]);
				break;
			}
		}	  	
	}
}
int main()
{
	    int size;
		printf("Enter size of array:\n");
		scanf("%d",&size);
		int arr[size];
		enter_arr(arr,size);
		repeted(arr,size);
}