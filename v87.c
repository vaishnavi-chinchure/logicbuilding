//accept n numbers from user and return smallest number
#include<stdio.h>
#include<stdlib.h>
int smallest(int size,int arr[])
{
	int i=0;
	int a=arr[1];
	
	for(i=0;i<size;i++)
	{
		if(arr[i]<a)
		{
			a=arr[i];
		}
	}return a;
}

int main()
{
	int i=0,*arr=NULL,size=0,ret=0;
	printf("enter the size");
	scanf("%d",&size);
	arr=(int*)malloc(size*(sizeof(int)));
	printf("enter the elements");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	ret=smallest(size,arr);
	printf("smallest number is %d",ret);
	free(arr);
	return 0;
}