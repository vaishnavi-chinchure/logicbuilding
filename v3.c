//program to print 5 to 1 numbers on screen
#include<stdio.h>
void display()
{
	int i=0;
	for(i=5;i>=1;i--)
	{
		printf("%d\n",i);
	}
}
int main()
{
	display();
	return 0;
}