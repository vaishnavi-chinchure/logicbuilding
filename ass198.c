///write a recursive program which display below pattren
//output: A B C D E F
#include<stdio.h>
void display()
{
	static char c='A';
	static int i=1;
	if(i<=6)
	{
		printf("%c\t",c);
		i++;
		c++;
		display();
	}
}

int main()
{
	display();
	return 0;
}