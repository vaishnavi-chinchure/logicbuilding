//accept number from user and check whether number is even or odd
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
int check(int ivalue)
{
	if(ivalue%2==0)
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
	int bret=FALSE;
	printf("enter the number");
	scanf("%d",&ino);
	bret=check(ino);
	if(bret==TRUE)
	{
		printf("it is even number");
	}
	else
	{
		printf("it is odd number");
	}
	return 0;
}