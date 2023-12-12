//accept string from user and count number of characters from that string
//input:hello
//output:5
#include<stdio.h>
int count(char c[])
{
	static int i=0;
	if(*c!='\0')
	{
		i++;
		c++;
		count(c);
	}
	return i;
}

int main()
{
	int ret=0;
	char c[10];
	printf("enter the string\n");
	scanf("%[^'\n']s",c);
	ret=count(c);
	printf("%d",ret);
	return 0;
}
