//write a recursive program which display below pattern
//input: 5
//output: * * * * *
#include<stdio.h>
void display(int ino)
{
	if(ino>=1)
	{
		printf("*\t");
		ino--;
		display(ino);
	}
}



int main()
{
	int ivalue=0;
	printf("enter the value");
	scanf("%d",&ivalue);
	display(ivalue);
	return 0;
}