//write a program which accept string from user and check whether it contains vowels in it or not.
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL check(char *str)
{
	while(*str!='\0')
	{
	if(*str=='a','A'||*str=='i','I'||*str=='o','O'||*str=='u','U')
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
	*str++;
	}
}


int main()
{
	char str[30];
	BOOL bret=FALSE;
	printf("enter the string");
	scanf("%[^'\n']s",str);
	bret=check(str);
	if(bret==TRUE)
	{
		printf("it contain vowel");
	}
	else
	{
		printf("it doesn't contain vowel");
	}
}
