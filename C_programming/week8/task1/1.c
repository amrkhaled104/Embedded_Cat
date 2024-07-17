/*
Write a C code defines a structure for employees that contains his salary, bonus and
deductions. The program shall ask the user to enter this information for three employees
(Mohsen, Maged and Mariam). Then the program will print the total values supplied by
the finance team.
*/
#include<stdio.h>

double nets=0.0;
typedef struct
{
	double salary;
	double bonus;
	double deductions;
	
}employees;

void getdata(employees employee [],const char *Names[])
{
	for(int i=0;i<3;i++)
	{
		printf("Enter %s Data:\n",Names[i]);
		printf("Enetr Salary:");
		scanf("%lf",&employee[i].salary);
		printf("Enetr Bonus:");
		scanf("%lf",&employee[i].bonus);
		printf("Enetr Deductions:");
		scanf("%lf",&employee[i].deductions);
	}
}
void net(employees employee [])
{
	for(int i=0;i<3;i++)
	{
		nets+=employee[i].salary+employee[i].bonus-employee[i].deductions;
		
	}
}

int main ()
{
	 const char *Names[] = {
        "Mohsen", "Maged", "Mariam"
    };
	employees employee [3];
	getdata(employee,Names);
	net(employee);
	printf("Total value = %.2lf",nets);
	

	
}