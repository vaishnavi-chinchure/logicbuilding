//write a recursive program which accept number from user and return summation of digits
//input:879
//output:24
#include<stdio.h>
int sum(int ino)
{
   static int idigit=0;
    static int isum=0;
	if(ino>0)
	{
		idigit=ino%10;
		isum=isum+idigit;
		ino=ino/10;
		sum(ino);
	}
	//ino=ino/10;
	//sum(ino);
	return isum;
}


int main()
{
	int ivalue=0;
	int ret=0;
	printf("enter the value");
	scanf("%d",&ivalue);
	ret=sum(ivalue);
	printf("%d",ret);
	return 0;
}