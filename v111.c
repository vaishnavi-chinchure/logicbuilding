//write a program which accept string from user and accept one charracter.check whether that charracter is
//present in it or not.
//input:marvellous multi os
	//	e
//output:TRUE 

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL check(char *str,char cvalue)
{
	while(*str!='\0')
	{
		if(*str==cvalue)
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
	char cvalue;
	BOOL bret=FALSE;
	printf("enter the string\n");
	scanf("%[^'\n']s",str);
	printf("enter the charracter\n");
	scanf(" %c",&cvalue);
	bret=check(str,cvalue);
	if(bret==TRUE)
	{
		printf("charracter found");
	}
	else
	{
		printf("charracter didn't found");
	}
	return 0;
}
