//accept n numbers from user and display all such elements which are even and disible by 5
#include<stdio.h>
#include<stdlib.h>
void display(int isize,int arr[])
{
	int i=0;
	for(i=1;i<=isize;i++)
	{
		if(arr[i]%2==0&&arr[i]%5==0)
		{
			printf(" number which is even and divisible by 5 are %d\n",arr[i]);
		}
	}
}
int main()
{
	int isize=0,i=0;
	int *arr=NULL;
	printf("enter the size of array\n");
	scanf("%d",&isize);
	arr=(int*)malloc(isize*(sizeof(int)));
	printf("enter the elements\n");
	for(i=1;i<=isize;i++)
	{
		scanf("%d",&arr[i]);
	}
	display(isize,arr);
	free(arr);
	return 0; 
}