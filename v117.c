//write a program which accept string from user and copy the contents of that string into another string  
//(implement strncpy function)
//input:marvellous multi os
//      10
//output:marvellous

#include<stdio.h>
void strcopy(char *arr, char *brr,int no)
{
	int i=0;
	while((*arr!='\0')&&(no>0))
	{
		*brr=*arr;
		arr++;
		brr++;
		no--;
	}
	*brr='\0';
}

int main()
{
	char arr[30]="marvellous multi os";
	char brr[30];
	int no=0;
	printf("enter no");
	scanf("%d",&no);
	strcopy(arr,brr,no);
	printf("string is %s",brr);
	return 0;
}