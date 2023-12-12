//accept number from user and display below pattern
//input: 5
//output: A B C D E
#include<stdio.h>
void display(int n)
{
	int i=0;
	char c='A';
	for(i=1;i<=n;i++)
	{
		printf("%c\t",c);
		c++;
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