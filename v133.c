//write a program which accept one number from user and one position from user and that bit .return modified number

//input:10 3
//output:14  
#include<stdio.h>
int onbit(int ino,int ipos)
{
	int imask=0X00000001;
	int iresult=0;
	imask=imask<<(ipos-1);
	iresult=imask|ino;
	return iresult;
}
int main()
{
	int ino=0,ipos,iret;
	printf("enter the number\n");
	scanf("%d",&ino);
	printf("enter the position\n");
	scanf("%d",&ipos);
	iret=onbit(ino,ipos);
	printf("%d",iret);
	return 0;
}