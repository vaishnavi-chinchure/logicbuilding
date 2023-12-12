//accept character from user and check whether it is alphabet or not
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL check(char a)
{
	if((a>=65)&&(a<=90)||(a>=97)&&(a<=122))
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
	char a='\0';
	BOOL ret=FALSE;
	printf("enter charracter\n");
	scanf("%c",&a);
	ret=check(a);
	if(ret==TRUE)
	{
		printf("it is a alphabet");
	}
	else
	{
		printf("it is not a alphabet");
	}
	return 0;
}