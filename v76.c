//accept  n numbers from user and return frequency of even numbers
#include<stdio.h>
#include<stdlib.h>
int display(int isize,int arr[])
{
	int i=0,count=0;
	for(i=1;i<=isize;i++)
	{
		if(arr[i]%2==0)
		{
			count++;
		}
	}return count;
}

int main()
{
	int isize=0,i=0,ret=0;
	int *arr=NULL;
	printf("enter the size of array\n");
	scanf("%d",&isize);
	arr=(int*)malloc(isize*(sizeof(int)));
	printf("enter the elements\n");
	for(i=1;i<=isize;i++)
	{
		scanf("%d",&arr[i]);
	}
	ret=display(isize,arr);
	printf("even number count is %d",ret);
	free(arr);
	return 0;
}

