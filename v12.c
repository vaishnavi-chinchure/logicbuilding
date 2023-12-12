//write a program which accept one number from user and print even factors of thet numbers.
//input:24
//output:1 2 4 6 8 12
#include<stdio.h>
void display(int ivalue)
{
	int i=0;
	for(i=1;i<=(ivalue/2);i++)
	{
		if(ivalue%i==0)
		{
			
			printf("%d\n",i);
			
		}
	}
}
int main()
{
	int ino=0;
	printf("enter the number");
	scanf("%d",&ino);
	display(ino);
	return 0;
}