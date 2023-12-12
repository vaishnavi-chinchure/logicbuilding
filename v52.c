// accept number of rows and columns from user and display below pattern.
//input:  irow=4 icol=4
//output: A B C D
//        a b c d
//        A B C D
//        a b c d
#include<stdio.h>
void display(int ino1,int ino2)
{
	int i=0,j=0;
	char ch='A',cha='a';
	for(i=1;i<=ino1;i++)
	{
		for(j=1,ch='A',cha='a';j<=ino2;j++,ch++,cha++)
		{
			if(i%2!=0)
			{
				printf("%c\t",ch);
			}
			else
			{
				printf("%c\t",cha);
			}
		}printf("\n");
	}
}
int main()
{
	int irow,icol;
	printf("enter the number of rows\n");
	scanf("%d",&irow);
	printf("enter the number of columns\n");
	scanf("%d",&icol);
	display(irow,icol);
	return 0;
}