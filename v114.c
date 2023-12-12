// write a program which accept string from user and accept one charracter and return index of last occurence that
// charracter 
//input: Marvellous
//charracter : e
//output: 1

#include<stdio.h>
int lastindex(char *str,char cvalue)
{
	int count=0;
	while(*str!='\0')
	{
		str++;
		count++;
	}
	str--;
	//count--;
	while(*str!='\0')
	{
		if(*str==cvalue)
		{
			break;
		}
	str--;
	count--;	
	}
	return count;
}

int main()
{
	char str[20];
	char cvalue='\0';
	int ret=0;
	printf("enter the string\n");
	scanf("%[^'\n']s",str);
	printf("enter charracter\n");
	scanf(" %c",&cvalue);
	ret=lastindex(str,cvalue);
	printf("index is %d",ret);
	return 0;
}

