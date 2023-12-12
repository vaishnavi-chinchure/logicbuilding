//write a program which accept one number and position from user and off bitof that number if it is on return modified number
//input:10 2
//output:8
#include<stdio.h>
int onbit(int ino,int ipos)
{
	int imask=0X00000001;
	int iresult=0;
	imask=imask<<(ipos-1);
	iresult=imask^ino;
	return iresult;
	
}
int main()
{
	int ino,ipos,bret;
	printf("enter the number\n");
	scanf("%d",&ino);
	printf("enter the position\n");
	scanf("%d",&ipos);
	bret=onbit(ino,ipos);
	printf("%d",bret);
	return 0;
}