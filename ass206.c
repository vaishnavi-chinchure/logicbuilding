////write a recursive program which display below pattern
//input: 5
//output: 5 * 4 * 3 * 2 * 1 *
#include<stdio.h>
void display(int ino)
{
	int i=ino;
	if(ino>=1)
	{
		printf("%d\t*\t",i);
		ino--;
		display(ino);
		
	}
}


int main()
{
	int ivalue=0;
	printf("enter the ivalue");
	scanf("%d",&ivalue);
	display(ivalue);
	return 0;
}