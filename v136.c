//write a program which accept one number from user and return count number of ON(1) bits in it without using% and / operator
//input:11
//output:3
#include<stdio.h>
int onbitcount(int ino)
{
	int imask=0X00000001;
	int iresult=0;
	int count;
	for(int i=0;i<32;i++)
	{
		iresult=ino&imask;
		if(iresult==imask)
		{
			count++;
		}
		imask=imask<<1;
		
	}
	return count;
} 
int main()
{
	int ino=0,ipos=0,iret;
	printf("enter the number\n");
	scanf("%d",&ino);
	
	iret=onbitcount(ino);
	printf("%d",iret);
	return 0;
}