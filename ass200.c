///write a recursive program which display below pattren
//output: 5 4 3 2 1 
#include<stdio.h>
void display()
{
	static int i=5;
	
	if(i>=1)
	{
		printf("%d\t",i);
		i--;
		display();
	}
}
int main()
{
	display();
	return 0;
}
