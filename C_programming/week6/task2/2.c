#include<stdio.h>
#include<string.h>

int main ()
{
	int ca=0,cd=0,cs=0;
  char str[50];
  gets(str);

  for(int i=0;i<strlen(str);i++)
  {
	 if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
	 {
		 ca++;
	 }
	 else if(str[i]>='0'&&str[i]<='9')
	 {
		 cd++;
	 }
	 else {cs++;}    
  }
  


printf("lphabets=%d, digits=%d special=%d ",ca,cd,cs);

}