//write a program which accept one number from user and one position from user and check whether the bit is on or off.if bit is one return
//return true.if it is zero  return false
//input 10 2
//output true
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL checkbit(int ino,int ipos)
{
	int imask=0X00000001;
	int iresult=0;
	imask=imask<<(ipos-1);
	iresult=imask&ino;
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
	int ino=0,ipos;
	BOOL bret=TRUE;
	printf("enter the number\n");
	scanf("%d",&ino);
	printf("enter the position\n");
	scanf("%d",&ipos);
	bret=checkbit(ino,ipos);
	if(bret==TRUE)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}