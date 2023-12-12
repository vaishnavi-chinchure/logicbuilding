//write a program which accept one number from user and off 7th bit of that number if it is on return modified
//number
//input:79
//output:15
#include<stdio.h>
#include<stdbool.h>
int off(unsigned int ino,int ipos)
{
	int imask=0X00000001;
	int iresult=0;
	if(ipos<1||ipos>32)
	{
		return false;
	}
	imask=imask<<(ipos-1);
	iresult=imask^(ino);
	return iresult;
}

int main()
{
	int no=0;
	int ipos,iret;
	printf("enter the number\n");
	scanf("%d",&no);
	printf("enter the position\n");
	scanf("%d",&ipos);
	iret=off(no,ipos);
	printf("modified number is %d",iret);
	return 0;
}