//write a program which accept one number from user and print even factors of that numbers.
#include<stdio.h>
void display(int ivalue)
{
	int i=0;
	for(i=1;i<=ivalue/2;i++)
	{
		if(ivalue%i==0)
		{
			if(i%2==0)
			{
			printf("%d\n",i);
			}
		}
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