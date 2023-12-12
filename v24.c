//accept one number from user and count frequency of 4 in it
#include<stdio.h>
int frequency(int ino)
{
	int idigit=0;
	int count=0;
	while(ino>0)
	{
		idigit=ino%10;
		if(idigit==4)
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
	printf("%d",ret);
}