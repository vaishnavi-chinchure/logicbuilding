//accept one number from user and count the frequency of even digits of that number
#include<stdio.h>
int frequency(int ino)
{
	int idigit=0,count=0;
	while(ino>0)
	{
		int idigit=ino%10;
		if(idigit%2==0)
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
	printf("count of even digits %d",ret);
	return 0;
}