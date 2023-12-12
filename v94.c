//accept character from user and check whether it is small case or not
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL check(char ch)
{
	if(ch>=97&&ch<=122)
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
		printf("it is small case");
	}
	else
	{
		printf("it is not a small case");
	}
	return 0;
}