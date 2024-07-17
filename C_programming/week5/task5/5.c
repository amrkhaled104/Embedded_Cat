/*
Write a C code that defines 3 int variables x, y and z and 3 pointers to int px, py and pz.
Set x, y, z to three distinct values. Set px, py and pz to the addresses of x, y, z respectively.
Can you expect the output before you run the program ... ?
a- Print with labels the values of x, y, z, px, py, pz, *px, *py, *pz.
b- Print the message: Swapping pointers.
c- Execute the swap code: pz = px; px = py; py = pz;
d- Print with labels the values of x, y, z, px, py, pz, *px, *py, *pz.
*/
#include<stdio.h>

void swap(int **px,int **py,int **pz)
{
     int *temp = *pz;
     *pz = *px;
	 *px = *py;
	 *py = temp;	
}



int main()
{
    int x=10,y=12,z=15;
	int *px=&x,*py=&y,*pz=&z;
	printf("%d\n",x);//x
	printf("%d\n",y);//y
	printf("%d\n",z);//z
	printf("%p\n",px);//&x
	printf("%p\n",py);//&y
	printf("%p\n",pz);//&z
	printf("%d\n",*px);//x
	printf("%d\n",*py);//y
	printf("%d\n",*pz);//z
	printf("Swapping pointers\n");
	swap(&px,&py,&pz);
	printf("%d\n",x);//x
	printf("%d\n",y);//y
	printf("%d\n",z);//z
	printf("%p\n",px);//&y
	printf("%p\n",py);//&z
	printf("%p\n",pz);//&x
	printf("%d\n",*px);//y
	printf("%d\n",*py);//z
	printf("%d\n",*pz);//x
	
}