// accept number of rows and columns from user and display below pattern.

//input:  irow=3 icol=5
//output: 5 4 3 2 1
//        5 4 3 2 1
//        5 4 3 2 1
#include<stdio.h>
void display(int ino1,int ino2)
{
	int i=0,j=0;
	for(i=1;i<=ino1;i++)
	{
		for(j=ino2;j>=1;j--)
		{
			printf("%d\t",j);
		}
		printf("\n");
	}
}

int main()
{
	int irow=0,icol=0;
	printf("enter the number of rows\n");
	scanf("%d",&irow);
	printf("enter the number of columns\n");
	scanf("%d",&icol);
	display(irow,icol);
	return 0;
}