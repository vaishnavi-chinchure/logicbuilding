//write a recursive program which accept number from user and return smallest digit
//input:87545
//output:4
#include<stdio.h>
int small(int ino)
{
	static int min=9;
	static int idigit=0;
	
	if(ino>0)
	{
		idigit=ino%10;
		if(idigit<=min)
		{
			min=idigit;
		}
		ino=ino/10;
		small(ino);
	}
		return min;
}

int main()
{
	int ivalue=0,ret=0;
	printf("enter the ivalue");
	scanf("%d",&ivalue);
	ret=small(ivalue);
	printf("%d",ret);
	return 0;
}