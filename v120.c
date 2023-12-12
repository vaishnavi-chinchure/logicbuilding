//write a program which accept two strings from user and conact second string with the first string
//input:"Marvellous"
//input:"Infosytems"
//output:"Marvellous Infosytems"
#include<stdio.h>
#include<stdlib.h>
void strcon(char *str,char *dest)
{
	while(*str!='\0')
	{
		str++;
	}
	*str=' ';
	str++;
	while(*dest!='\0')
	{
		*str=*dest;
		dest++;
		str++;
		
	}
	*dest='\0';
}


int main()
{
	char arr[30]="Marvellous";
	char brr[30]="Infosytems";
	strcon(arr,brr);
	printf("%s",arr);
	return 0;
}