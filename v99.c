//accept character from user and check whether it is special charracter or not
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL check(char c)
{
	if(((c>=32)&&(c<=47))||((c>=58)&&(c<=64)))
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
	printf("enter charracter");
	scanf(" %c",&ch);
	bret=check(ch);
	if(bret==TRUE)
	{
		printf("it is special charracter\n");
	}
	else
	{
		printf("it is not special charracter");
	}
}
