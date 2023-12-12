/*accept number of rows and columns from user and display below pattern.
 input: irow=4 icol=4
 output:  $ * * *
		  # $ * *
		  # # $ *
		  # # # $
*/

#include<stdio.h>
void pattern(int ino1,int ino2)
{
	int i=0,j=0;
	for(i=1;i<=ino1;i++)
	{
		for(j=1;j<=ino2;j++)
		{
			if(i==j)
			{
				printf("$\t");
			}
			else if(i<j)
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
	int irow=0,icol=0;
	printf("enter the number of rows and columns\n");
	scanf("%d%d",&irow,&icol);
	pattern(irow,icol);
	return 0;
}