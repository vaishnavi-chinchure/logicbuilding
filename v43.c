////accept one number from user and display its below pattern
//input: 5
//output: 1 * 2 * 3 * 4 * 5 *
#include<stdio.h>
void display(int n)
{
	int i=0;
	for(i=1;i<=n;i++)
	{
		printf("%d\t*\t",i);
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