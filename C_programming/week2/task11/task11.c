/*Write a c code that draws a pyramid of stars with height entered by the user.
(equilateral)*/
#include<stdio.h>
int main(){
	int height;
	printf("enter height:");
	scanf("%d",&height);
	for(int i=1;i<=height;i++){
		for(int j=1;j<=(height-i);j++){
			
			printf(" ");
		}
		for(int k=1;k<=(2*i-1);k++){
			
				printf("*");
			}
		
		printf("\n");
	}
	
}