// accept number of rows and columns from user and display below pattern.
//input:  irow=4 icol=4
//output: A B C D
//        A B C D
//        A B C D
//        A B C D

#include<stdio.h>
void display(int irow,int icol)
{
	int i=0,j=0;
	char ch='A';
	for(i=1;i<=irow;i++)
	{
		for(j=1,ch='A';j<=icol;j++,ch++)
		{
			printf("%c\t",ch);
			
		}
		printf("\n");
	}
}
int main()
{
	int irow=0,icol=0;
	printf("enter the number of rows and columns");
	scanf("%d%d",&irow,&icol);
	display(irow,icol);
	return 0;
}
