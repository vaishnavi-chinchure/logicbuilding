//write a program ehich accept string from user and copy the small characters of that string into anther string
//input:"Marvellous multi OS"
//output:"arvellous multi"

#include<stdio.h>
void strcpysml(char *str,char *dest)
{
	while(*str!='\0')
	{
		if((*str>='a')&&(*str<='z'))
		{
			*dest=*str;
			*dest++;
		}
		str++;
	}
	*dest='\0';
}
int main()
{
	char arr[30]="Marvellous multi OS";
	char brr[30];
	strcpysml(arr,brr);
	printf("%s",brr);
	return 0;
}