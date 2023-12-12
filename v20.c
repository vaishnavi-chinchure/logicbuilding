//write a program which accept one number from user and display difference between 
//summation of all its  factors and non factors.
#include<stdio.h>
int display(int ino)
{
	int i=0;
	int sum1=0;
	int sum2=0;
	int diff=0;
	for(i=1;i<ino;i++)
	{
		if(ino%i==0)
		{
			sum1=i+sum1;
		}
		else 
		{
			sum2=i+sum2;
		}	
	}
	diff=sum1-sum2;
	return diff;
}
int main()
{
	int ino=0;
	int ret=0;
	printf("enter the number\n");
	scanf("%d",&ino);
	ret=display(ino);
	printf("difference is %d",ret);
	return 0;
}