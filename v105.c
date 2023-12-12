//write a program which accept string from user and display it in a reverse order.


#include<stdio.h>

void reverse(char *str)
{
	char m='\0';
	int i=0,count=0;
	while(*str!='\0')
	{
		count++;
		str++;
	}
	str--;
	
	for(i=count,*str;i>=1;i--,*str--)
	{
		printf("%c",*str);
	}
	
	
}

int main()
{
	 char str[40];
	 printf("enter the charracter\n");
	 scanf("%[^'\n']s",str);
	 reverse(str);
	 return 0;
}