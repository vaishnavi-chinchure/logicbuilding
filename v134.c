//write a program which accept one number from user and accept one position from user and toggle that bit return modified number 
#include<stdio.h>
int toggle(int ino,int ipos)
{
	int imask=0X00000001;
	int iresult=0;
	imask=imask<<(ipos-1);
	iresult=imask^ino;
	return iresult;
}
int main()
{
	int ino=0,ipos,iret=0;
	printf("enter the number\n");
	scanf("%d",&ino);
	printf("enter the position\n");
	scanf("%d",&ipos);
	iret=toggle(ino,ipos);
	printf("modified number: %d",iret);
	return 0;
}