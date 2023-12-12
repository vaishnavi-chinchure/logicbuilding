// write a program which accpet range from user and display all numbers in between that 
//range.

#include<stdio.h>
void display(int ivalue1,int ivalue2)
{
	int i=ivalue1;
	for(i=ivalue1;i<=ivalue2;i++)
	{
		printf("%d\t",i);
	}
}
int main()
{
	int ino1=0,ino2=0;
	printf("enter the first number\n");
	scanf("%d",&ino1);
	printf("enter the second number\n");
	scanf("%d",&ino2);
	display(ino1,ino2);
	return 0;
}