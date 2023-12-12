//accept n numbers from user and one another number as NO and return frequency of that number
#include<stdio.h>
#include<stdlib.h>
int display(int size,int arr[])
{
	int i=0,count=0,NO=0;
	printf("enter the NO value");
	scanf("%d",&NO);
	for(i=0;i<=size;i++)
	{
		if(arr[i]==NO)
		{
			count++;
		}
	}
	return count;
}

int main()
{
	int i=0,*arr=NULL,size=0,NO=0,ret=0;
	printf("enter the size");
	scanf("%d",&size);
	arr=(int*)malloc(size*(sizeof(int)));
	
	printf("enter the elements\n");
	for(i=1;i<=size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	
	ret=display(size,arr);
	printf("count is %d",ret);
	free(arr);
	return 0;
}