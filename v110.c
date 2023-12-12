//write a program which accept string from user and count number of white spaces.
//input:marvellous
//output:0
//input:marvellous infosystems.
//output:1
//input:marvellous infosystems by piyush manohar khairnnar.
//output:5

#include<stdio.h>

int count(char *str)
{
	int count=0;
	while(*str!='\0')
	{
		if(*str==' ')
		{
			count++;
		}
		*str++;
	}return count;
}

int main()
{
	char str[49];
	int ret=0;
	printf("enter the string");
	scanf("%[^'\n']s",str);
	ret=count(str);
	printf("count is %d",ret);
	return 0;
}