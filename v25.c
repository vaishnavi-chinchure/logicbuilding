//accept one number from user and count frequency of such digit which is less than 6
#include<stdio.h>
int frequency(int ino)
{
	int idigit=0,count=0;
	while(ino>0)
	{
		idigit=ino%10;
		if(idigit<6)
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
	ret=frequency(ino);
	printf("count is %d",ret);
	return 0;
}