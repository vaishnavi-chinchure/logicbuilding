//accept n numbers from user and return largest number 
#include<stdio.h>
#include<stdlib.h>
int largest(int size,int arr[])
{
	int i=0;
	int a=0;
    a=arr[1];
	for(i=1;i<=size;i++)
	{   
		if(arr[i]>a)
		{
			a=arr[i];
		}
	}
	return a;
}
int main()
{
	int size=0,i=0;
	int *arr=NULL,ret=0;
	printf("enter the size");
	scanf("%d",&size);
	arr=(int*)malloc(size*(sizeof(int)));
	printf("enter the elements");
	for(i=1;i<=size;i++)
	{
		scanf("%d",&arr[i]);
	}
	ret=largest(size,arr);
	printf("largest number is %d",ret);
	free(arr);
	return 0;
}
