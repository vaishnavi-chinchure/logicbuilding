//write a program which accept one number from user and print that number of even 
//numbers on screen.
#include<stdio.h>
void display(int ino)
{
	int i=0;
	int a=0;
	for(i=1;i<=ino;i++)
	{
		a=a+2;
		printf("%d\n",a);
		
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