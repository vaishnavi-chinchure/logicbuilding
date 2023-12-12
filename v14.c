//accept one charcter from user and convert case of that character
#include<stdio.h>
int convert(char c)
{
	if((c>='A')&&(c<='Z'))
	{
		c=c+32;
		return c;
	}
	else if((c>='a')&&(c<='z'))
	{
		c=c-32;
		return c;
	}
}


int main()
{
	char ch='\0';
	char ret;
	printf("enter the charracter");
	scanf("%c",&ch);
	ret=convert(ch);
	printf("%c",ret);
	return 0;
}