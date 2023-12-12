//accept one number from user if number is less than 10 then print "hello" otherwise print "demo".
#include<stdio.h>
void display(int ivalue)
{
	if(ivalue<=9)
	{
		printf("hello");
	}
	else
	{
		printf("demo");
	}
}
int main()
{
	int ino;
	printf("enter the number");
	scanf("%d",&ino);
	display(ino);
	return 0;
}
