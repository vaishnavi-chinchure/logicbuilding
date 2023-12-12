///write abgh recursive program which display below pattren
//input:6
//output: A B C D E F
#include<stdio.h>
void display(int ino)
{
	static int i=1;
   static char c='A';
	if(i<=ino)
	{
		printf("%c\t",c);
		i++;
		c++;
		display(ino);
	}
}
int main()
{
	int value=0;
	printf("enter the value");
	scanf("%d",&value);
	display(value);
	return 0;
}