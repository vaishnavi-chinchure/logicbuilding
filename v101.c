//write a program which accept string from user and count number of capital charracters.
//input:Marvellous Infosystem
//output:2

#include<stdio.h>
int countcapital(char *str)
{
	int icnt=0;
	while(*str!='\0')
	{
		if((*str>='A')&&(*str<='Z'))
		{
			icnt++;
		}
		str++;
	}

	return icnt;
}
int main()
{
	char arr[20];
	int iret=0;
	printf("enter the string\n");
	scanf("%[^'\n']s",arr);
	iret=countcapital(arr);
	printf("%d",iret);
	return 0;
}