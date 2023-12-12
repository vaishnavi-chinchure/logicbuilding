//accept one number from user and return difference between summation of even elements and summation of odd
//odd elements 
// input: 6
// elements: 85 66 3 80 93 88
// output: 53(234-181)

#include<stdio.h>
#include<stdlib.h>
int diff(int size,int arr[])
{
	int i=0,esum=0,osum=0,dif=0;
	for(i=1;i<=size;i++)
	{
		if(arr[i]%2==0)
		{
			esum=arr[i]+esum;
		}
		else
		{
			osum=arr[i]+osum;
		}
		
	}
	dif=esum-osum;
	return dif;
}
int main()
{
	int size=0,ret=0,i=0;
	int *p=NULL;
	printf("enter the size of array\n");
	scanf("%d",&size);
	p=(int*)malloc(size*(sizeof(int)));
	printf("enter the elements\n");
	for(i=1;i<=size;i++)
	{
		scanf("%d",&p[i]);
	}
	ret=diff(size,p);
	printf("difference is %d:",ret);
	free(p);
	return 0;
}