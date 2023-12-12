//write a program which accept number from user and print its numbers line.
//input:4
//output:-4 -3 -2 -1 0 1 2 3 4

#include<stdio.h>
void display(int ino)
{
	int i=0;
	int j=-ino;
	for(i=1;i<=(ino*2)+1;i++)
	{
		printf("%d\t",j);
		j++;
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