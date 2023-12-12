//write a program which displays ascii table.table contains symbol,decimal,hexadecimal&octal representation of 
//every member from 0 to255.

#include<stdio.h>
void display()
{
	int i=0;
	for(i=1;i<=255;i++)
	{
		printf("%d\t%c\t%o\t%x\n",i,i,i,i);
	}
}

int main()
{
	display();
	return 0;
}