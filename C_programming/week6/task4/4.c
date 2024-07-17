/*
4-Write a C program to input any string from user and find the first occurrence of a given character in the string. 
Example:-
Input string: I love Codeforwin.
Input character to search:o
Output
'o' is found at index 3

*/

#include<stdio.h>
#include<string.h>
 
 
 int main ()
 {
	 char str[30];
	 printf("Input string:");
	 gets(str);
	 char ch;
	 printf("Input character to search:"); scanf(" %c",&ch);
	 
	 for(int i=0;i<strlen(str);i++)
	 {
		 if(str[i]==ch)
		 {
			 printf("'%c' is found at index %d",ch,i);
			 break;
			 //If you want to know all the indexes, remove break
		 }
		 
	 }
	 
	 
	 
 }