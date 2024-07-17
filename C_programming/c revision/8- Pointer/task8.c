#include <stdio.h>

void maxmin(int arr[],int size,int *maxarr,int *minarr)
{
	*maxarr= arr[0];
	*minarr=arr[0];
	for(int i = 0; i < size; i++){
		
	if(arr[i]>*maxarr) *maxarr=arr[i];
	else if (*minarr>arr[i]) *minarr=arr[i];
	}
}
int main()
{
	int arr[20], arr_size,maxarr,minarr;
	
	printf("Enter size of array: ");
	scanf("%d",&arr_size);
	
	printf("Enter %d elements in array: ",arr_size);
	for(int i = 0; i < arr_size; i++)
		scanf("%d",&arr[i]);
	
	maxmin(arr,arr_size,&maxarr,&minarr);
	printf("MAX elements: %d\n",maxarr);
	printf("MIN elements: %d\n",minarr);
	
	return 0;
}