//accept character from user and check whether it is capital or not
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL check(char cvalue)
{
	if(cvalue>=65&&cvalue<=90)
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
	char cvalue='\0';
	BOOL bret=FALSE;
	printf("enter the charracter");
	scanf("%c",&cvalue);
	bret=check(cvalue);
	if(bret==TRUE)
	{
		printf("it is a capital");
	}
	else
	{
		printf("it is not a capital");
	}
	return 0;
}