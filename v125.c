//write a program which checks whether 1st &32th bit is on or off
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
typedef unsigned int UNIT;
int checkbit(UNIT ino)
{
	unsigned int imask=0X80000001;
	unsigned int result=0;
	result=(imask&ino);
	if(result==imask)
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
	BOOL bret;
	int ino=0;
	printf("enter number\n");
	scanf("%d",&ino);
	bret=checkbit(ino);
	if(bret==TRUE)
	{
		printf("1st and 32th bits are on");
	}
	else
	{
		printf("1st and 32th bits are off");
	}
	
}