//Write a c code login code but use a function called login.
#include<stdio.h>
const int ID=12356789;
const int PASSWORD=123;
int check_id(){
    printf("enter id:\n");
	while(1){
	 int id;
	scanf("%d",&id);
	 if(id==ID){
		 printf("-true-\n");
		 return 1;
	 }
	else{
		printf("wrong id try again \n");	
	}
	}
} 
 int check_password(){
	 printf("leek 3 m7wlat\nenter password:\n");
	 for(int i=1;i<=3;i++){
	 int pass;
	 scanf("%d",&pass);
	 if(pass==PASSWORD){
		 printf("welcome");
		 return 1;
	 }
	 else{
	     if(i!=3){
		 printf("Wrong\nNow,yu have %d M7awla\ntry again\n",3-i);
	 }
	 else
	 {
	  printf("You no longer have to try");
	 }
	 }
	 }
	 return 0;
	
 }
int main(){
      check_id();
	  check_password();
}