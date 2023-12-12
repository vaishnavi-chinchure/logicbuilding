//write a program which accept one number from user and off 7th&10th bit of that number if it is on return modified
//number
//input:577
//output:1
#include<stdio.h>
#include<stdbool.h>
unsigned int off(unsigned int no,int ipos1,int ipos2)
{
	unsigned int imask1=0X00000001;
	unsigned int imask2=0X00000001;
	unsigned int imask=0X00000001;
	unsigned int iresult=0;
	if((ipos1<1)||(ipos1>32)||(ipos2<1)||(ipos2>32))
	{
		return false;
	}
	imask1=imask1<<(ipos1-1);
	imask1=imask1<<(ipos2-1);
	imask=imask1|imask2;
	iresult=no&imask;
	return iresult;
	
}
int main()
{
	int no=0,iret,ipos1,ipos2;
	printf("enter the number\n");
	scanf("%d",&no);
	printf("enter the two positions\n");
	scanf("%d%d",&ipos1,&ipos2);
	iret=off(no,ipos1,ipos2);
	printf("modified number is %d",iret);
	return 0;
}
