/*Write a program in C to sort elements of an array in ascending and descending order :
The User Enter 0 for ascending or Enter 1 for descending. The elements of the array
entered by the user.*/
#include<stdio.h>
void enter_arr(int arr[],int size)
{
  printf("Enter elements of array:");
  for(int i=0;i<size;i++)
  {
	  scanf("%d",&arr[i]);
  }  
}
void sort_arr(int arr[],int size,int num)
{
	int n=size-1;
	
	if(num==0)
	{
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
	else if(num==1)
		{
			while(n>0)
			{
				for(int i=0;i<size-1;i++)
				{
					if(arr[i]<arr[i+1])
					{
						int temp=arr[i];
						arr[i]=arr[i+1];
						arr[i+1]=temp;
					}
					
				}
				n--;
			}
		}
}

void print_arr(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
}
int main()
{ 
	    int num,size;
		printf("Enter size of array:\n");
		scanf("%d",&size);
		int arr[size];
		enter_arr(arr,size);
		printf("Enter 0 for ascending or Enter 1 for descending:\n"); 	
		scanf("%d",&num);
		printf("array aFter:\n");
		sort_arr(arr,size,num);
		print_arr(arr,size);
		
}