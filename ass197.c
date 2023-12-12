///write a recursive program which display below pattren
//output: 1 2 3 4 5 
#include<stdio.h>
void display()
{
	static int i=1;
	if(i<=5)
	{
		printf("%d\t",i);
		i++;
		display();
	}
}



int main()
{
	display();
	return 0;
	
}