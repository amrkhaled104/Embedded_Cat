#include<stdio.h>
#include<string.h>

int main ()
{
	int ca=0,cd=0,cs=0;
  char str[50];
  char reverse[50];
  gets(str);
int n=strlen(str);
  for(int i=0;i<n;i++)
  {
	 reverse[i]=str[(n-1)-i];
}

printf("reverse=%s ",reverse);

}