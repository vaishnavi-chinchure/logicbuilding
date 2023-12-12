//write a program which accept one number from user and toggle 7thand10th bit of that number  return modified number
//number 
//input:137
//output:713  
#include<stdio.h>
unsigned int toggle(unsigned int ino,int ipos1,int ipos2)
{
	unsigned int imask1=0X00000001;
	unsigned int imask2=0X00000001;
	unsigned int imask=0X00000001;
	unsigned int iresult=0;
	imask1=imask1<<(ipos1-1);
	imask2=imask2<<(ipos2-1);
	imask=imask1|imask2;
	iresult=ino|imask;
	return iresult;
	
}
int main()
{
	unsigned int ino=0,ipos1,ipos2,iret;
	printf("enter the number\n");
	scanf("%d",&ino);
	printf("enter the positions\n");
	scanf("%d%d",&ipos1,&ipos2);
	iret=toggle(ino,ipos1,ipos2);
	printf("modified number is:%u",iret);
	return 0;
}