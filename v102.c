//write a program which accept string from user and count number of capital charracters.
//input:Marvellous 
//output:9

#include<stdio.h>
int countsmall(char *str)
{
	int icnt=0;
	while(*str!='\0')
	{
		if((*str>='a')&&(*str<='z'))
		{
			icnt++;
		}
		str++;
	}
	return icnt;
}
int main()
{
	char arr[30];
	int ret=0;
	printf("enter the string");
	scanf("%[^'\n']s",arr);
	ret=countsmall(arr);
	printf("%d",ret);
	return 0;
}