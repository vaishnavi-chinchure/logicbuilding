//accept one character from user and check whether it is vowel or not
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
int check(char ch)
{
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
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
	char bret=FALSE;
	printf("enter the charracter");
	scanf("%c",&ch);
	bret=check(ch);
	if(bret==TRUE)
	{
		printf("it is a vowel");
	}
	else
	{
		printf("it is not a vowel");
	}
	return 0;
}