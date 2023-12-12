//write a program which accept one number from user and print numbers till that number.
#include<stdio.h>
int display(int ino)
{
	int i=0;
	for(i=1;i<=ino;i++)
	{
		printf("%d\t",i);
	}
}
int main()
{
	int ino=0;
	printf("enter the number");
	scanf("%d",&ino);
	display(ino);
	return 0;
}