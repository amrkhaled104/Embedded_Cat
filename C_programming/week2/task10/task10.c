/*Write a C that asks the user to enter his ID and his password, if the ID is correct the
system will ask the user to enter his password up to 3 times, if he enters the password
right the system welcomes him, if the three times are incorrect, the system prints "No
more tries". The system prints "You are not registered" on every wrong try. (Login
code*/
#include<stdio.h>
int main(){ int count=2;
	int ID=123456789;
	int PASSWORD=123;
	while(1){
		int password=0,id=0;
		printf("enter yu ID:");
		scanf("%d",&id);
		if(id==ID){
			for(int i=1;i<=3;i++){
				printf("enter password");
				scanf("%d",&password);
				if(password==PASSWORD){
					printf("welcome");
					count=2;
					break;
				}
				else{
				    if(count!=0)
				    {
                    printf("You are not registered\ntry again\n");
					count--;
				    }

					}
			}
			if(count==0){
				printf("No more tries");
				}

			break;
		}
		else{
			printf("your ID is wrrong Try again\n");
			}
	}
}