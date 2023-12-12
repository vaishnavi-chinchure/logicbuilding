//accept n numbers from user and return difference between evennumber frequecy and odd number frequency
#include<stdio.h>
#include<stdlib.h>
int display(int size,int arr[])
{
	int j=0,evencount=0,oddcount=0,a=0;
	for(j=1;j<=size;j++)
	{
		if(arr[j]%2==0)
		{
			evencount++;
		}
		else
		{
			oddcount++;
		}
	} 
	a=evencount-oddcount;
	return a;
} 

int main()
{
	int size=0,i=0;
	int ret=0,*arr=NULL;
	printf("enter the size of array\n");
	scanf("%d",&size);
	arr=(int*)malloc(size*(sizeof(int)));
	printf("enter the elements\n");
	for(i=1;i<=size;i++)
	{
		scanf("%d",&arr[i]);
	}
	ret=display(size,arr);
	printf("difference is %d",ret);
	free(arr);
	return 0;
}