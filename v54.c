// accept number of rows and columns from user and display below pattern.
//input:  irow=4 icol=5
//output: 4 4 4 4 4
//        3 3 3 3 3
//        2 2 2 2 2
//        1 1 1 1 1

#include<stdio.h>
void display(int ino1,int ino2)
{
	int i=0,j=0;
	for(i=ino1;i>=1;i--)
	{
		for(j=1;j<=ino2;j++)
		{
			printf("%d\t",i);
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