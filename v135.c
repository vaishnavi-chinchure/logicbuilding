//write a programe whch accept one number from user and  toggle the contents of the first and last nibble of the number.
//and return modified number. 
#include<stdio.h>
int nibbletoggle(int ino,int ipos1,int ipos2,int ipos3,int ipos4,int ipos5,int ipos6,int ipos7,int ipos8)
{
	int imask=0X00000001;
	int imask1=0X00000001;
	int imask2=0X00000001;
	int imask3=0X00000001;
	int imask4=0X00000001;
	int imask5=0X00000001;
	int imask6=0X00000001;
	int imask7=0X00000001;
	int imask8=0X00000001;
	int iresult=0;
	imask1=imask1<<(ipos1-1);
	imask2=imask2<<(ipos2-1);
	imask3=imask3<<(ipos3-1);
	imask4=imask4<<(ipos4-1);
	imask5=imask5<<(ipos5-1);
	imask6=imask6<<(ipos6-1);
	imask7=imask7<<(ipos7-1);
	imask8=imask8<<(ipos8-1);
	imask=imask1|imask2|imask3|imask4|imask5|imask6|imask7|imask8;
	iresult=ino^imask;
	return iresult;
	
	
}
int main()
{
	int ivalue=0;
	int iret,ipos1,ipos2,ipos3,ipos4,ipos5,ipos6,ipos7,ipos8;
	printf("enter the number\n");
	scanf("%d",&ivalue);
	printf("enter the positions\n");
	scanf("%d%d%d%d%d%d%d%d",&ipos1,&ipos2,&ipos3,&ipos4,&ipos5,&ipos6,&ipos7,&ipos8);
	iret=nibbletoggle(ivalue,ipos1,ipos2,ipos3,ipos4,ipos5,ipos6,ipos7,ipos8);
	printf("%d",iret);
}