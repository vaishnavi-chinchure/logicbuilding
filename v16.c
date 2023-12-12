//accept one number from user and display multiplication of  factors of that number
#include<stdio.h>
int display(int ivalue)
{
	int i=0;
	int mult=1;
	for(i=1;i<=ivalue/2;i++)
	{
		if(ivalue%i==0)
		{
			mult=mult*i;
			
		}
	}
	return mult;
}
int main()
{
	int ino;
	int ret=0;
	printf("enter the number\n");
	scanf("%d",&ino);
	ret=display(ino);
	printf("%d",ret);
	return 0;
}