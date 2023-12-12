//write a program which accept string from user and one charracter from user return the frequency of that
// charracter
//input:Marvellous Multi os
//      M
//output:2
#include<stdio.h>

int frequency(char *str,char ch)
{
	int count=0;
	while(*str!='\0')
	{
		if(*str==ch)
		{
			count++;
		}
		*str++;
	}
	return count;
	
}

int main()
{
	char str[30];
	char cvalue;
	int ret=0;
	printf("enter the string\n");
	scanf("%[^'\n']s",str);
	printf("enter the charracter\n");
	scanf(" %c",&cvalue);
	ret=frequency(str,cvalue);
	printf("count is %d",ret);
	return 0;
	
}