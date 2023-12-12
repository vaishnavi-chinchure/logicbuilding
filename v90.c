//accept n numbers from user and display summation of each digit of each numbers
#include<stdio.h>
#include<stdlib.h>
void display(int size,int arr[])
{
	int i=0;
	int a=0;
	int sum=0,m,j;
	for(i=0;i<size;i++)
	{
		while(arr[i]>0)
		{
			m=arr[i]%10;
			sum=m+sum;
			arr[i]=arr[i]/10;
		}
		printf("sum is %d\n",sum);
		sum=0;		
	
	}
}
int main()
{
	int i=0;
	int *arr=NULL,size=0;
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