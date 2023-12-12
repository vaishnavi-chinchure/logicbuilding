//write a program which accept string from user and convert it into uppercase.
//input:Marvellous MULTI os
//output::MARVELLOUS MULTI OS

#include<stdio.h>
int uppercase(char *str)
{
	while(*str!='\0')
	{
		if(*str>='a'&&*str<='z')
		{
		*str=*str-32;
		}
		*str++;
	}
	
	return *str;
}



int main()
{
	char str[30];
	char ret;
	printf("enter string");
	scanf("%[^'\n']s",str);
	ret=uppercase(str);
	printf("uppercase string %s",str);
	return 0;
}