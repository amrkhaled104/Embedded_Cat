/*Write a C code that asks the user to enter 2 values and save them in two variables, then
the program sends these variables by address to a function that returns the summation
of them. The program then prints the result.
 */
 
 #include<stdio.h>
 
 
 
 void summation(double *ptr1,double *ptr2,double *sum)
 {
	  *sum = *ptr1 + *ptr2;
 }
 
 int main()
 {
	 
	 double num1,num2,sum=0;
	 printf("enter two num:");
	 scanf("%lf %lf",&num1,&num2);
	 
	 summation(&num1,&num2,&sum);
	 printf("sum = %g",sum);
	 
 }