//write a program which accept string from user and convert it into lowecase.
//input:Marvellous MULTI os
//output:marvellous multi os
#include<stdio.h>
int lowercase(char *str)
{
	while(*str!='\0')
	{
		if((*str>='A')&&(*str<='Z'))
		{
			*str=*str+32;
			
		}
		*str++;
	}
	return *str;
}


int main()
{
	char str[30];
	char ret;
	printf("enter the string\n");
	scanf("%[^'\n']s",str);
	ret=lowercase(str);
	printf("%s",str);
	return 0;
}

