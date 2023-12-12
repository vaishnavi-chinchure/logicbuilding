//accept n numbers from user and return product of all odd elements
#include<stdio.h>
#include<stdlib.h>
int product(int size,int arr[])
{
	int i=0,mult=1;
	for(i=1;i<=size;i++)
	{
		if(arr[i]%2!=0)
		{
			mult=mult*arr[i];
		}
		else
		{
			mult=0;
		}
	}
	return mult;
}


int main()
{
	int i=0,ret=0;
	int size=0,*arr=NULL;
	printf("enter the size ");
	scanf("%d",&size);
	arr=(int*)malloc(size*(sizeof(int)));
	printf("enter the elements\n");
	for(i=1;i<=size;i++)
	{
		scanf("%d",&arr[i]);
	}
	ret=product(size,arr);
	printf("product is %d ",ret);
	free(arr);
	return 0;
}