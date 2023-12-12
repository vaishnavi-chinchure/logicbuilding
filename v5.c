// accept one number from user and print that number of "*" on screen
#include<stdio.h>
void display(int ivalue)
{
	int i=0;
	for(i=1;i<=ivalue;i++)
	{
		printf("*\t");
	}
}
int main()
{
	int ino;
	printf("enter the number\n");
	scanf("%d",&ino);
	display(ino);
	return 0;
	
}