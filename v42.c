//accept one number from user and display its below pattern
//input: 5
//output: 5 # 4 # 3 # 2 # 1 #
#include<stdio.h>
void display(int ino)
{
	int i=ino;
	for(i=ino;i>=1;i--)
	{
		printf("%d\t#\t",i);
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