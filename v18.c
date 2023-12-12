//write a program which accepts one number from  user and display all its non factors.
#include<stdio.h>
int display(int ivalue)
{
	int i=0;
	for(i=1;i<=ivalue;i++)
	{
		if(ivalue%i!=0)
		{
			printf("%d\t",i);
		}
	}
}
int main()
{
	int ino=0;
	printf("enter the number\n");
	scanf("%d",&ino);
	display(ino);
	return 0;
}