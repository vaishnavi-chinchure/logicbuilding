//write a program which accept range from user and return the addition of all numbers in 
//between that range.
#include<stdio.h>
int display(int ino1,int ino2)
{
	int i=0,add=0;
	for(i=ino1;i<=ino2;i++)
	{
		add=add+i;
	}
	return add;
}
int main()
{
	int ino1,ino2,ret;
	printf("enter the first number\n");
	scanf("%d",&ino1);
	printf("enter the second number\n");
	scanf("%d",&ino2);
	ret=display(ino1,ino2);
	printf("%d",ret);
	return 0;
}