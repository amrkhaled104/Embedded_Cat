#include <stdio.h>

int main()
{
	int arr[20], arr_size;
	int even_numbers = 0, odd_numbers = 0;
	
	printf("Enter size of array: ");
	scanf("%d",&arr_size);
	
	printf("Enter %d elements in array: ",arr_size);
	for(int i = 0; i < arr_size; i++)
		scanf("%d",&arr[i]);
	
	for(int i = 0; i < arr_size; i++)
	{
		if(arr[i] % 2 == 0)
			even_numbers++;
		else
			odd_numbers++;
	}
	
	printf("Total even elements: %d\n",even_numbers);
	printf("Total odd elements: %d\n",odd_numbers);
	
	return 0;
}