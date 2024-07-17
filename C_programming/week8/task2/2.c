/*
Write a C code to manage a class of 10 students. Each student studies 4 subjects
Programming, Data Structures, Discrete Math and Algorithms.
First define an array of 10 elements and assign random grades for students. The system
will ask the user to enter the student ID then the system will show its grades. The
software shall manage wrong IDs and enable admins to manipulate the grades of the
students.

*/
#include<stdio.h>

typedef struct
{
	long long  ID;
	float Prog;
	float Data_Struct;
	float Discrete_Math;
	float Algorithms;
	
}students;

void getdata( students student [])
{
	for(int i=0;i<10;i++)
	{
		printf("\nEnter studend %d Data:\n\n",i+1);
		printf("Enetr ID:");
		scanf("%ld",&student[i].ID);
		printf("Enetr Degree Of prog:");
		scanf("%f",&student[i].Prog);
		printf("Enetr Degree Of Data_Structures:");
		scanf("%f",&student[i].Data_Struct);
		printf("Enetr Degree Of Discrete_Math:");
		scanf("%f",&student[i].Discrete_Math);
		printf("Enetr Degree Of Algorithms:");
		scanf("%f",&student[i].Algorithms);
	}
}
int print_data(students student[],int id)
{
	for(int i=0;i<10;i++)
	{
		if(student[i].ID==id)
		{
			printf("Data:\n\nProgrammin = %.2f\nData Structures = %.2f\nDiscrete Math = %.2f\nAlgorithms = %.2f\n",student[i].Prog,student[i].Data_Struct
			,student[i].Discrete_Math,student[i].Algorithms);
		      return 0;
			
		}
	}
printf("Wrong Data\n");
return 0;	
}
int main()
{
	students student[10];
	while(1){
		printf("1-->admin\n2-->user\n");
		int num;scanf("%d",&num);
		if(num==1)
		{
			getdata(student);
		}
		else if(2==num)
		{
			printf("Enter ID\n");
			int id;scanf("%d",&id);
			print_data(student,id);
		}
	}
}