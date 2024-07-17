#include<stdio.h>
int main(){
	 float w_hours,net_salary=0,salary=0;
	printf("enter the working hours ");
	scanf("%f",&w_hours);
	salary=w_hours*50;
	if(w_hours<40){
		net_salary=salary-(.1*salary);
	}
	else{
		net_salary=salary;
	}
	printf("net_salary=%f",net_salary);
}