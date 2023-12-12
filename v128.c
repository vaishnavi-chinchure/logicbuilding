//write a program which accept one number from user and toggle off 7th bitof that number if it is on return modified
//number
#include<stdio.h>
int toggle(int ino,int ipos)
{
	int imask=0X00000001;
	int iresult=0;
	imask=imask<<(ipos-1);
	iresult=ino|imask;
	return iresult;
}
int main()
{
	int ino=0,ipos=0,iret;
	printf("enter the number\n");
	scanf("%d",&ino);
	printf("enter the position\n");
	scanf("%d",&ipos);
	iret=toggle(ino,ipos);
	printf("togggled number is : %d",iret);
	return 0;
}