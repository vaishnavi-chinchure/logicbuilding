//write a program which checks whether 7th ,15th,21st&28bits is on or off
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
typedef unsigned int UNIT;

int checkbit(unsigned int ino)
{
	unsigned int imask=0X08104040;
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
	int ino=0;
	BOOL bret;
	printf("enter the ino value");
	scanf("%d",&ino);
	bret=checkbit(ino);
	if(bret==TRUE)
	{
		printf("7,15,21 and 28 bits are on");
	}
	else
	{
		printf("7,15,21 and 28 bits are not on");
	}
	return 0;
}