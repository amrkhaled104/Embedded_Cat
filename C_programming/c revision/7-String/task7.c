#include<stdio.h>
#include <string.h>
int main()
{
	char str1[100];
	char str2[100];
	
	//char*ptr=str1;
	printf("enter string");
	gets(str1);
	int i=0;
	while(str1[i]!='\0')
	{
		str2[i]=str1[i];
		i++;
		//*ptr++;
	}
	str2[i]='\0';
	printf("str1=%s\nstr2=%s",str1,str2);
}