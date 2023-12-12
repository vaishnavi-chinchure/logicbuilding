/*accept number of rows and columns from user and display below pattern.
 input: irow=4 icol=4
 output:  1 2 3 4
            2 3 4
              3 4
                4		  
*/

#include<stdio.h>
void pattern(int irow,int icol)
{
	int i=0,j=0;
	for(i=1;i<=irow;i++)
	{
		for(j=1;j<=icol;j++)
		{
			
			if(i<=j)
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
	int r=0,c=0;
	printf("enter the number of rows and columns\n");
	scanf("%d%d",&r,&c);
	pattern(r,c);
	return 0;
}