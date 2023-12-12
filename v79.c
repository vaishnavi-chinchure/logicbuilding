//accept n numbers from user and return frequency of 11 int it
#include<stdio.h>
#include<stdlib.h>
int display(int size,int arr[])
{
	int i=0,count=0;
	for(i=0;i<=size;i++)
	{
		if(arr[i]==11)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int size=0;
	int i=0,*arr=NULL,ret=0;
	printf("enter the size");
	scanf("%d",&size);
	arr=(int*)malloc(size*(sizeof(int)));
	printf("enter the elements\n");
	for(i=1;i<=size;i++)
	{
		scanf("%d",&arr[i]);
	}
	ret=display(size,arr);
	printf("cout is %d",ret);
	free(arr);
	return 0;
	
}