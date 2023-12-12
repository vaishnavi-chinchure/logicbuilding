//accept one n numbers from user and display all such elements which are divisible by 5
#include<stdio.h>
#include<stdlib.h>

void display(int size,int arr[])
{
	int i=0;
	for(i=0;i<=size;i++)
	{
		if(arr[i]%5==0)
		{
			
			printf("elements which are divisible by 5 are %d\n",arr[i]);
		}
	}
}

int main()
{
	int size=0,ret=0,i=0;
	int *arr=NULL;
	printf("enter the size of the array\n");
	scanf("%d",&size);
	arr=(int*)malloc(size*(sizeof(int)));
	printf("enter the elements\n");
	for(i=0;i<=size;i++)
	{
		scanf("%d",&arr[i]);
	}
	display(size,arr);
	free(arr);
	return 0;
}