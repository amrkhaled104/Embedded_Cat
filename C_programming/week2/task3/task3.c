/*Write a C code that asks the user to enter his ID and then the program will print his
name.
Available IDs are: (1234 -> Harry), (5678 -> Ron), (1145 -> Hermione)
Any other number, the program will print "Wrong ID".*/
#include<stdio.h>
int main(){
int ID;
printf("enter yu ID:");
scanf("%d",&ID);
switch(ID){
	case 1234:
	printf("Harry");
	break;
	case 5678:
	printf("Ron");
	break;
	case 1145:
	printf("Hermione");
	break;
	default:
	printf("Wrong ID");
	break;
}
}