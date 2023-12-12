//write a program which accept string from user and display only digits from that string
//input:marve89llous121
//output:89121
//input:demo
//output:

#include<stdio.h>
void displaydigit(char *str)
{
	char m;
	while(*str!='\0')
	{
		if(*str>='0'&&*str<='9')
		{
			printf("%c",*str);
		}
		*str++;
	}
	
	
}


int main()
{
	char str[50],ret;
	printf("enter the string\n");
	scanf("%[^'\n']s",str);
	displaydigit(str);
	
	return 0;
}