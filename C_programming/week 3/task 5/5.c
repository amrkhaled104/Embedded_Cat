/* Write a C code containing a function that gets the fibonacci of a given number.
Hint: Fibonacci is defined as :
f(n) = f(n - 1) + F(n - 2), f(0) = 0, f(1) = 1.*/
#include<stdio.h>
int fibonacci(int n,int first,int secound){
	 long long int a = 0, b = 1, temp;
	if(n==0){
		return a ;
	}
	else if(n==1){
		return b;
	}
	else{
		
		for(int i=1;i<(n-1);i++){
			 temp=a+b;
			 a=b;
			 b=temp;
		}
		return b;
	}
}
int main(){
	int a=0,b=1;
	int n;
	printf("enter n\n");
	scanf("%d",&n);
	printf("fibonacci of %d = %d",n,fibonacci(n,a,b));
}