// accept one number of rows and number of columns from user and display below pattern 
//input: irow=4 icol=4
//output: 1 2 3 4 5
//        1 2     5
//        1   3   5
//        1     4 5
//        1 2 3 4 5

#include<stdio.h>
void pattern(int irow,int icol)
{
	int i=0,j=0;
	for(i=1;i<=irow;i++)
	{
		for(j=1;j<=icol;j++)
		{
			if((i==j)||(i==1)||(j==1)||(i==irow)||(j==icol))
			{
				printf("%d\t",j);
			}
			else
			{
				printf(" \t");
			}
		}
		printf("\n");
	}
}
int main()
{
	int irow=0,icol=0;
	printf("enter the number of rows and columns\n");
	scanf("%d%d",&irow,&icol);
	pattern(irow,icol);
	return 0;
}