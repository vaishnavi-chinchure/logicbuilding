///write a recursive program which display below pattren
//output: a b c d e
#include<stdio.h>
void display()
{
	static int i=1;
	static char c='a';
	if(i<=5)
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