//accept one number from user and display its below pattern.
//input: 8
//output: 2 4 6 8 10 12 14 16
#include<stdio.h>
void display(int n)
{
	int i=0;
	int j=2;
	for(i=1;i<=n;i++)
	{
		printf("%d\t",j);
		j=j+2;
		
	}
}


int main()
{
	int ino;
	printf("enter the number");
	scanf("%d",&ino);
	display(ino);
	return 0;
}