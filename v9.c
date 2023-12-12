//accept two numbers from user and display first number second number of times.
#include<stdio.h>
void display(int ino1,int ino2)
{
	int i=0;
	for(i=1;i<=ino2;i++)
	{
		printf("%d\n",ino1);
	}
}
int main()
{
	int ivalue1=0;
	int ivalue2=0;
	printf("enter first number");
	scanf("%d",&ivalue1);
	printf("enter second number");
	scanf("%d",&ivalue2);
	display(ivalue1,ivalue2);
	return 0;
}