//write a recursive program which display below pattren
//output: * * * *
#include<stdio.h>
void display()
{
	static int i=1;
	if(i<=4)
	{
		printf("*\t");
		i++;
		display();
	}
}	
	int main()
	{
		display();
		return 0;
	}
