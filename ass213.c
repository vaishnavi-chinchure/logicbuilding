//write program which accept string from user and count the number of small case characters
//input:HEllo
//output:3
#include<stdio.h>
int count(char c[])
{
	static int i=0;
	if(*c!=0)
	{
		if((*c>='a')&&(*c<='z'))
		{
			i++;
		}
		c++;
		count(c);
	}
	return i;
}


int main()
{
	char c[100];
	int ret=0;
	printf("enter the string");
	scanf("%[^'\n']s",c);
	ret=count(c);
	printf("%d",ret);
	return 0;
}
