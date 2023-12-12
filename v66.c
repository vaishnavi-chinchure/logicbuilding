// accept one number of rows and number of columns from user and display below pattern 
//input: irow=4 icol=4
//output: * * * #
//		  * * # *
//		  * # * *
//		  # * * *

#include<stdio.h>
void pattern(int irow,int icol)
{
	int i=0,j=0;
	for(i=1;i<=irow;i++)
	{
		for(j=icol;j>=1;j--)
		{
			if(i==j)
			{
				printf("#\t");
			}
			else
			{
				printf("*\t");
			}
		}
		printf("\n");
	}
}
int main()
{
	int irow,icol;
	printf("enter the number of rows and columns\n");
	scanf("%d%d",&irow,&icol);
	pattern(irow,icol);
	return 0;
}