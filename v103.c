//write a program which accept string from user and return the difference between lower 
//and uppercase count

#include<stdio.h>

int dif(char *arr)
{
	int icntc=0,icnts=0,dif=0;
	while(*arr!='\0')
	{
		if(*arr>='A'&&*arr<='Z')
		{
			icntc++;
		}
		else if(*arr>='a'&&*arr<='z')
		{
			icnts++;
		}
		arr++;
	}
	dif=icntc-icnts;
	return dif;
}
int main()
{
	char arr[30];
	int ret=0;
	printf("enter the string\n");
	scanf("%[^'\n']s",arr);
	ret=dif(arr);
	printf("difference is %d",ret);
	return 0;
}