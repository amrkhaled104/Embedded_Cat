/*Write a progr"am in C to print all unique elements of an unsorted array.
The elements of the array entered by the user.
Ex:
The given array is : 1 5 8 5 7 3 2 4 1 6 2
Unique Elements in the given array are:
1 5 8 7 3 2 4 6*/
#include<stdio.h>
void enter_arr(int arr[],int size)
{
  printf("Enter elements of array:");
  for(int i=0;i<size;i++)
  {
	  scanf("%d",&arr[i]);
  }  
}
void isunique(int arr[],int size)
{   
   
	for(int i=0;i<size;i++)
 	{    int x=0;
       for(int j=i-1;j>=0;j--)
		{   
			if(arr[i]==arr[j])
			{
				x++;
				break;
			}
			
		}
		if(x==0)
		{
			printf("%d ",arr[i]);
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
		isunique(arr,size);
}