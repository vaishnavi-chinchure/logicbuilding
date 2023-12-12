//accept one number from user and display that number of "@" on screen
#include<stdio.h>
void display(int ino)
{
	int i=0;
	while(i<ino)
	{
		printf("@\t");
		i++;
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