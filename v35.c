//write a program  print first 5 multiples  n.
#include<stdio.h>
void display(int ino)
{
	int i=0;
	int j=ino;
	for(i=1;i<=5;i++)
	{
	
		printf("%d\t",j);
		j=j+ino;
		
	}
}
int main()
{
	int ivalue=0;
	printf("enter the number");
	scanf("%d",&ivalue);
	display(ivalue);
	return 0;
}