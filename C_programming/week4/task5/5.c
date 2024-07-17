#include<stdio.h>
int sumrow=0,sumcol=0;
void enter_arr(int arr[][5])
{
	for(int i=0;i<5;i++)
	{    
        printf("enter row %d:",i+1);
		for(int j=0;j<5;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
}
void getsumrow(int arr[5][5])
{
	for(int i=0;i<5;i++)
	{    sumrow=0;
		for(int j=0;j<5;j++)
		{
			sumrow+=arr[i][j];
		}
		printf("%d ",sumrow);
	}
	
}
void getsumcol(int arr[5][5])
{
	for(int i=0;i<5;i++)
	{    sumcol=0;
		for(int j=0;j<5;j++)
		{
			sumcol+=arr[j][i];
		}
		printf("%d ",sumcol);
	}
	
}

int main()
{
	
int arr[5][5];
enter_arr(arr);
getsumrow(arr);
printf("\n");
getsumcol(arr);

}