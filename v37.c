//write a program which accept range from user and display all even numbers in between 
//that range
#include<stdio.h>
void display(int ino1,int ino2)
{
	int i=0;
	for(i=ino1;i<=ino2;i++)
	{
		if(i%2==0)
		{
			printf("%d",i);
		}
	}
}
int main()
{
	int ino1=0,ino2=0;
	printf("enter the first number\n");
	scanf("%d",&ino1);
	printf("enter second number");
	scanf("%d",&ino2);
	display(ino1,ino2);
	return 0;
}