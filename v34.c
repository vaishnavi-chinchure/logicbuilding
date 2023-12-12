//write a program which accepts n from user and print all odd numbers upto n.
#include<stdio.h>
void display(int ino)
{
	int i=0;
	for(i=1;i<=ino;i++)
	{
		printf("%d",i++);
	}
}
int main()
{
	int no;
	printf("enter the no");
	scanf("%d",&no);
	display(no);
	return 0;
}