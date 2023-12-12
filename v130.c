//write a program which accept one number from user and on its first 4 bits.return modified number
//input:73
//output:79 
/*#include<stdio.h>
int onbit(int ino)
{
	int imask=0X0000000F;
	int iresult;
	 iresult=ino|imask;
	return iresult;
}
int main()
{
	int ino=0,iret;
	printf("enter the number\n");
	scanf("%d",&ino);
	iret=onbit(ino);
	printf("%d",iret);
	return 0;
}
*/
#include<stdio.h>
int onbit(int ino,int ipos1,int ipos2,int ipos3,int ipos4)
{
	int imask1=0X00000001;
	int imask2=0X00000001;
	int imask3=0X00000001;
	int imask4=0X00000001;
	int imask=0X00000001;
	int iresult=0;
	imask1=imask1<<(ipos1-1);
	imask2=imask2<<(ipos2-1);
	imask3=imask3<<(ipos3-1);
	imask4=imask4<<(ipos4-1);
	imask=imask1|imask2|imask3|imask4;
	iresult=ino|imask;
	return iresult;
	
}
int main()
{
	int no=0,ipos1,ipos2,ipos3,ipos4,iret;
	printf("enter the number\n");
	scanf("%d",&no);
	printf("enter the positions\n");
	scanf("%d%d%d%d",&ipos1,&ipos2,&ipos3,&ipos4);
	iret=onbit(no,ipos1,ipos2,ipos3,ipos4);
	printf("%d",iret);
	return 0;
}