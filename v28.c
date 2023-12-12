//write a program which accept number from user and return count of digits in between 3 and 7

#include<stdio.h>
int count(int ino)
{
	int idigit=0,count=0;
	while(ino>0)
	{
		idigit=ino%10;
		if((idigit>=3)&&(idigit<=7))
		{
			count++;
		}
		ino=ino/10;
	}return count;
}
int main()
{
	int ino=0,ret=0;
	printf("enter the number");
	scanf("%d",&ino);
	ret=count(ino);
	printf("count is %d",ret);
	return 0;
}