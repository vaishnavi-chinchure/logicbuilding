//accept one number and check wether it is divisible by 5 or not
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
int check(int ino)
{
	if(ino%5==0)
	{
		return TRUE; 
	}
	else
	{
		return FALSE;
	}
}
int main()
{
	int ino;
	int bret=0;
	printf("enter the number");
	scanf("%d",&ino);
	bret=check(ino);
	if(bret==TRUE)
	{
		printf("it is divisible by 5");
	}
	else
	{
		printf("it is not divisible by 5");
	}
}