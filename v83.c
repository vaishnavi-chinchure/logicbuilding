//accept n numbers from user and one another number as NO and return index of last occurence od that 
//number
#include<stdio.h>
#include<stdlib.h>
int lastoccurence(int size,int NO,int arr[])
{
	int i=0;
	for(i=size;i>=1;i--)
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
	int i=0,size=0,NO=0,ret=0,*arr=NULL;
	printf("enter the size");
	scanf("%d",&size);
	arr=(int*)malloc(size*(sizeof(int)));
	printf("enter the elements");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the NO");
	scanf("%d",&NO);
	ret=lastoccurence(size,NO,arr);
	printf("lastoccurence is %d",ret);
	free(arr);
	return 0;
}