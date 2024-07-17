/* Write a code that scans 3 numbers from the user and prints them in reversed order.*/
#include<stdio.h>
int main(){
	int arr[3];
	for(int i=0;i<3;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=2;i>=0;i--){
		printf("%d ",arr[i]);
	}
}