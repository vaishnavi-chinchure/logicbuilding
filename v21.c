//write a program to accept number from user and display its digits in a reverse order 
#include<stdio.h>
int displayreverse(int ivalue)
{
	int i=0;
	int idigit=0;
	while(ivalue>0)
	{
		idigit=ivalue%10;
		printf("%d",idigit);
		ivalue=ivalue/10;
	}
}
int main()
{
	int ino=0;
	printf("enter the number");
	scanf("%d",&ino);
	displayreverse(ino);
	return 0;
}