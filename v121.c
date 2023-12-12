//write a program which checks whether 15 bit is on or off
#include<stdio.h>
typedef int BOOL;
typedef unsigned int UNIT;
#define TRUE 1
#define FALSE 0
BOOL checkbit(unsigned int ivalue)
{
	unsigned int result=0;
	unsigned int imask=0X004000;
	BOOL bret=0;
	result=(ivalue&imask);
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
	unsigned int ivalue=0;
	BOOL bret=TRUE;
	printf("enter the number\n");
	scanf("%d",&ivalue);
	bret=checkbit(ivalue);
	if(bret==TRUE)
	{
		printf("15 bit is on");
	}
	else
	{
		printf("15 bit is not on");
	}
	return 0;
}
