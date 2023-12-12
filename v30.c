//accept one number from user and return difference between summation of evendigits and
//odd digits
#include<stdio.h>
int diff(int ino)
{
	int idigit=0,difference=0;
	int esum=0,osum=0;
	while(ino>0)
	{
		idigit=ino%10;
		if(idigit%2==0)
		{
			esum=esum+idigit;
		}
		else
		{
			osum=osum+idigit;
		}
		ino=ino/10;
		difference=esum-osum;
	}return difference;
	
}
int main()
{
	int ino=0,ret=0;
	printf("enter the number");
	scanf("%d",&ino);
	ret=diff(ino);
	printf("difference is %d",ret);
	return 0;
}