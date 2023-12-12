//accept one number from user and display the count of odd numbers
#include<stdio.h>
int oddfrequency(int ino)
{
	int idigit=0;
	int count=0;
	while(ino>0)
	{
		idigit=ino%10;
		if(idigit%2!=0)
		{
			count++;
		}
		ino=ino/10;
	}return count;
}
int main()
{
	int ino=0,ret=0;
	printf("enter the number ");
	scanf("%d",&ino);
	ret=oddfrequency(ino);
	printf("%d",ret);
}
