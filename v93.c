//accept character from user and check whether it is digit or not
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL check(char c)
{
	if(c>=48&&c<=57)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
int main()
{
	char ch='\0';
	BOOL bret=FALSE;
	printf("enter the charracter");
	scanf("%c",&ch);
	bret=check(ch);
	if(bret==TRUE)
	{
		printf("it is digit");
	}
	else
	{
		printf("it is not a digit");
	}
	return 0;
}