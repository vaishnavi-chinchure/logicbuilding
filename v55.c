// accept number of rows and columns from user and display below pattern.
//input:  irow=3 icol=4
//output: 1  2  3   4
//        5  6  7   8
//        9  10 11  12
#include<stdio.h>
void display(int irow,int icol)
{
	int i=0,j=0,n=1;
	for(i=1;i<=irow;i++)
	{
		for(j=1;j<=icol;j++)
		{
			printf("%d\t",n);
			n++;
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