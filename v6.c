//accept one number from user and print that number od "*" on screen
#include<stdio.h>
void display(int n)
{
	int i=0;
	for(i=1;i<=n;i++)
	{
		printf("*\t");
	}
}
int main()
{
	int ino=4;
	display(ino);
	return 0;
}