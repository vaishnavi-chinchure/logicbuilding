//accept n number from user and display all such elements which are divisible by 3 and 5
#include<stdio.h>
#include<stdlib.h>

void display(int size,int arr[])
{
	int i=0;
	for(i=1;i<=size;i++)
	{
		if(arr[i]%5==0&&arr[i]%3==0)
		{
			printf("elemnets are %d\n",arr[i]);
		}
	}
}
int main()
{
	int size=0;
	int i=0;
	int *arr=NULL;
	printf("enter the size of array\n");
	scanf("%d",&size);
	arr=(int*)malloc(size*(sizeof(int)));
	printf("enter the elemnets");
	for(i=1;i<=size;i++)
	{
		scanf("%d",&arr[i]);
	}
	display(size,arr);
	free(arr);
	return 0;
}