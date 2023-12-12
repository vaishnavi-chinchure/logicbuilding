//accept n numbers from user and check whether tat numbers contains 11 in it or not
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL check(int size,int arr[])
{
	int i=0;
	for(i=1;i<=size;i++)
	{
		if(arr[i]==11)
		{
			return TRUE;
		}
		else
		{
			return FALSE;
		}
	}
}


int main()
{
	int size=0,*arr=NULL,i=0;
	BOOL bret=FALSE;
	printf("enter the size of the array\n");
	scanf("%d",&size);
	arr=(int*)malloc(size*(sizeof(int)));
	printf("enter the elements");
    for(i=1;i<=size;i++)
	{
		scanf("%d",&arr[i]);
	}
	bret=check(size,arr);
	if(bret==TRUE)
	{
		printf("it conains 11");
	}
	else
	{
		printf("it doesn't contain 11");
	}
	free(arr);
	return 0;
	
}