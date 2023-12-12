// write a program which accept string from user reverse that string
//input: Marvellous
//charracter : e
//output: 1

#include<stdio.h>

void reverse(char *str)
{
	int count=0;
	char a;
	char *start;
	char *end;
	start=str;
	end=str;
	while(*end!='\0')
	{
		end++;
	}
	end--;
	
	while(start<end)
	{
		a=*start;
		*start=*end;
		*end=a;
		start++;
		end--;
	}
	
	
}


int main()
{
	char str[30];
	printf("enter the string");
	scanf("%[^'\n']s",str);
	reverse(str);
	printf("%s",str);
	return 0;
}