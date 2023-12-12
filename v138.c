//write a program which accept one number from user and check whether 9th or 12bit is on or off
//input:257
//output:TRUE
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL onoroff(int ino)
{
	int imask1=0X00000001;
	int imask2=0X00000001;
	int imask=0X00000001;
	int iresult=0;
	imask1=imask1<<(8);
	imask2=imask2<<(11);
	imask=imask1&imask2;
	iresult=imask|ino;
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
	BOOL bret;
	printf("enter the number\n");
	scanf("%d",&ino);
	bret=onoroff(ino);
	if(bret==TRUE)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
	return 0;
}