//write a recursive program which display below pattern
//input: 5
//output: 1 2 3 4 5 
#include<stdio.h>
void display(int ino)
{
	static int i=1;
	if(i<=ino)
	{
		printf("%d",i);
		i++;
		display(ino);
	}
}



int main()
{
	int ivalue=0;
	printf("enter the value");
	scanf("%d",&ivalue);
	display(ivalue);
	return 0;
}