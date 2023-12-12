//write a program which checks whether 7th,8th&9th bits is on or off
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
typedef unsigned int UNIT;
int checkbit(UNIT ino)
{
	unsigned int imask=0X000001C0;
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
	printf("enter the no");
	scanf("%d",&ino);
	bret=checkbit(ino);
	if(bret==TRUE)
	{
		printf("7,8 and 9th bits are on");
	}
	else
	{
		printf("7,8 and 9th bits are not on");
	}
	
	return 0;
	
}