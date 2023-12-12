//write a program which accept string from user and one charracter from user return the index of first occurence 
// of that charracter
//input:Marvellous Multi os
//      a
//output:2
#include<stdio.h>
int index(char *str,char cvalue)
{
	int count=0;
	while(*str!='\0')
	{
		count++;
		if(*str==cvalue)
		{
			
			break;
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
	ret=index(str,cvalue);
	printf("%d",ret);
	return 0;
}
