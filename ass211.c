//write a recursive program which accept string from user and count whitespaces
//input:he llo worl d
//output:3
#include<stdio.h>
int whitespace(char c[])
{
	static int count=0;
	if(*c>'\0')
	{
		if(*c==' ')
		{	
		count++;
		}
	
	*c++;
	whitespace(c);
	}
	return count;
}


int main()
{
	char c[100];
	int ret=0;
	printf("enter the ivalue");
	scanf("%[^'\n']s",c);
	ret=whitespace(c);
	printf("%d",ret);
	return 0;
}