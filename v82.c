//accept n numbers from user and one another number as NO and return index of first occurence od that 
//number

#include<stdio.h>
#include<stdlib.h>
int display(int size,int NO,int arr[])
{
	int i=0;
	for(i=1;i<=size;i++)
	{
		if(arr[i]==NO)
		{
			break;
		}
	}
	return i;
	
}
int main()
{
	int ret=0,*arr=NULL,i=0,NO=0,size=0;
	printf("enter the size");
	scanf("%d",&size);
	arr=(int*)malloc(size*(sizeof(int)));
	printf("enter the elements");
	for(i=1;i<=size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the NO");
	scanf("%d",&NO);
	ret=display(size,NO,arr);
	printf("index value is %d",ret);
	free(arr);
	return 0;
	
}