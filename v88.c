//accept n numbers from user and return the difference between largest and smallest numbers

#include<stdio.h>
#include<stdlib.h>
int difference(int size,int arr[])
{
	int i=0,a=arr[i];
	int b=arr[i],c;
	for(i=0;i<size;i++)
	{
		if(arr[i]>a)
		{
			a=arr[i];
		}
		else
		{
			b=arr[i];
		}
	}
	c=a-b;
	return c;
}

int main()
{
	int i=0,size=0,ret=0,*arr=NULL;
	printf("enter the size");
	scanf("%d",&size);
	arr=(int*)malloc(size*(sizeof(int)));
	printf("enter the elements");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	ret=difference(size,arr);
	printf("difference is %d",ret);
	free(arr);
	return 0;
	
}