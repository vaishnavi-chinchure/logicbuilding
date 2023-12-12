// write a program which accept string from user and copy the contents of that string into another string(strcpy function implement)
//input:marvellous 
//output:marvellous
#include<stdio.h>
void copystring(const char *str,const char *st)
{
	if(str==NULL||st==NULL)
	{
		return ;
	}
	
	while(*str!='\0')
	{
		*st=*str;
		str++;
		st++;
	}
	*st='\0';
	
}


int main()
{
	char str[30]="marvellous";
	char st[30];
	char ret;
	
	copystring(str,st);
	printf("copied string is %s",st);
	return 0;
}