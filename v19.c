//write a program which accept one number from user and display summation of all its non
//factors.
#include<stdio.h>
int display(int ivalue)
{
	int i=0;
	int sum=0;
	
	for(i=1;i<=ivalue;i++)
	{
		if(ivalue%i!=0)
		{
			sum=sum+i;
		}
	}return sum;
} 
int main()
{
	int ino=0;
	int ret=0;
	printf("enter the number");
	scanf("%d",&ino);
	ret=display(ino);
	printf("%d",ret);
	return 0;
}