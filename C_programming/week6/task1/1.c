#include<stdio.h>
#include<string.h>
int main ()
{
  char str[50];
  gets(str);

  for(int i=0;i<strlen(str);i++)
  {
	 // str[i]+=32;//up to low
	   str[i]=str[i]-32;//low to up
	    
  }
  puts(str);
  
}