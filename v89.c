//accept one number from user and display all such numbers which contain 3 digits
#include<stdio.h>
#include<stdlib.h>
void display(int size,int arr[])
{
	int i=0;
	for(i=0;i<size;i++)
	{
		if((arr[i]>=100)&&(arr[i]<1000))
		{
			printf("3 digit numbers are %d\n",arr[i]);
		}
	}
}

int main()
{
	int i=0,size=0,*arr=NULL;
	printf("enter the size");
	scanf("%d",&size);
	arr=(int*)malloc(size*(sizeof(int)));
	printf("enter the elements");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	display(size,arr);
	free(arr);
	return 0;
}