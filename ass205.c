///write abgh recursive program which display below pattren
//input:6
//output: a b c d e
#include<stdio.h>
void display(int ino)
{
	static int i=1;
	static char c='a';
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
	int ivalue=0;
	printf("enter the ivalue");
	scanf("%d",&ivalue);
	display(ivalue);
	return 0;
	
}