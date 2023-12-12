// accept number of rows and columns from user and display below pattern.
//input:  irow=3 icol=5
//output: A A A A A
//        B B B B B
//        C C C C C
#include<stdio.h>
void display(int ino1,int ino2)
{
	int i=0,j=0;
	char ch='\0';
	for(i=1,ch='A';i<=ino1;i++,ch++)
	{
		for(j=1;j<=ino2;j++)
		{
			printf("%c\t",ch);
		}printf("\n");
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
