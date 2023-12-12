//accept one number from user and count frequency of 2 in it
#include<stdio.h>
int count(int ino)
{
	int idigit=0;
	int count=0;
	while(ino>0)
	{
		idigit=ino%10;
		if(idigit==2)
		{
			count++;
		}
		
		ino=ino/10;
	}return count;
}

int main()
{
	int ino;
	int ret=0;
	printf("enter the number");
	scanf("%d",&ino);
	ret=count(ino);
	printf("count is %d",ret);
	return 0;
}