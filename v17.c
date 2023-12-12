//write a program which accept one number from user and display the factors of that number 
//in decreasing order.
#include<stdio.h>
void factors(int ivalue)
{
	int i=0;
	for(i=ivalue/2;i>=1;i--)
	{
		if(ivalue%i==0)
		{
			printf("%d\t",i);
		}
	}
}
int main()
{
	int ino=0;
	printf("enter the number");
	scanf("%d",&ino);
	factors(ino);
	return 0;
}