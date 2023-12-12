// accept number of rows and columns from user and display below pattern.
//input:  irow=3 icol=4
//output: 1  1  1  1
//        2  2  2  2
//        3  3  3  3
#include<stdio.h>
void display(int ino1,int ino2)
{
	int i=0,j=0;
	for(i=1;i<=ino1;i++)
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
	printf("enter the number rows and columns\n");
	scanf("%d%d",&irow,&icol);
	display(irow,icol);
	return 0;
}