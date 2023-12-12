//write a program which accept number from user and print that number of $ and * on screen.
#include<stdio.h>
void display(int ino)
{
	int i=0;
	for(i=1;i<=ino;i++)
	{
		printf("*\t$\t");
	}
}
int main()
{
	int ivalue=0;
	printf("enter the number");
	scanf("%d",&ivalue);
	display(ivalue);
	return 0;
}