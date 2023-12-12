//accept character from user if it is capital then display it as smallcase if it is smallcase then display 
//it into capital if there is another charracter then display as it is.
#include<stdio.h>

int display(char c)
{
	if(c>=65&&c<=92)
	{
		c=c+32;
	}
	else if(c>=97&&c<=122)
	{
		c=c-32;
	}
	else
	{
		c=c;
	}
		return c;
}
int main()
{
	char ch='\0';
	char cret='\0';
	printf("enter the charracter\n");
	scanf("%c",&ch);
	cret=display(ch);
	printf("charracter is %c",cret);
	return 0;
}