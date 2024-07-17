/*Write a program in C to find the second largest element in an array.
The elements of the array entered by the user.*/
#include<stdio.h>
void enter_arr(int arr[],int size)
{
  printf("Enter elements of array:");
  for(int i=0;i<size;i++)
  {
	  scanf("%d",&arr[i]);
  }  
}
void sort_arr(int arr[],int size)
{
	int n=size-1;

		while(n>0)
	    {
			for(int i=0;i<size-1;i++)
			{
				if(arr[i+1]<arr[i])
				{
					int temp=arr[i];
					arr[i]=arr[i+1];
					arr[i+1]=temp;
				}
				
			}
			n--;
		}
	
}	
int main()
{ 
	    int num,size;
		printf("Enter size of array:\n");
		scanf("%d",&size);
		int arr[size];
		enter_arr(arr,size);
		sort_arr(arr,size);
		printf("second largest element = %d",arr[size-2]);	
}