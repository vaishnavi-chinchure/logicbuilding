//accept n numbers from user and range from user display all the elements from that range
//number


#include<stdio.h>
#include<stdlib.h>
void range(int size,int start,int end,int arr[])
{
	int i=0;
	for(i=1;i<=size;i++)
	{
		if(arr[i]>=start&&arr[i]<=end)
		{
			printf("elements are %d\n",arr[i]);
		}
	}
}
int main()
{
	int i=0,size=0,*arr=NULL;
	int start=0,end=0;
	printf("enter the size");
	scanf("%d",&size);
	arr=(int*)malloc(size*(sizeof(int)));
	printf("enter the elements");
	for(i=1;i<=size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the start");
	scanf("%d",&start);
	printf("enter the end");
	scanf("%d",&end);
	range(size,start,end,arr);
	free(arr);
	return 0;
}