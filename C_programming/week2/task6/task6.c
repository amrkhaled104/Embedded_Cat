/*.Write a C code that asks the user to enter the result of 3 x 4, In case the user entered the
correct answer the program will print "Thanks", otherwise the program will print "Try
again" until the user enters the correct answer.*/
#include<stdio.h>
int main(){
	int val;
	while(1){
	printf("enter value of 3x4=");
	scanf("%d",&val);
	if(val==(3*4)){
		printf("Thanks");
		break;
	}
	else{
		printf("Try again\n");
	}
}
}


