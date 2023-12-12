#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
typedef unsigned int UNIT;

BOOL checkbit(unsigned int ino)
{
	unsigned int imask=0X0020010;
	unsigned int iresult=0;
	iresult=(imask|ino);
	if(iresult==imask)
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
	int ino=0;
	BOOL bret=TRUE;
	
	printf("enter the number\n");
	scanf("%d",&ino);
	bret=checkbit(ino);
	if(bret==TRUE)
	{
		printf("5th and 18 bits are on");
	}
	else
	{
		printf("5th and 18 bits are not on");
	}
	return 0;
}