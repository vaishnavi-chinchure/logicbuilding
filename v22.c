//accept number from user and check whether it contains 0 or not
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
int check(int ino)
{
	int idigit=0;
	while(ino>0)
	{
		idigit=ino%10;
		//printf("%d",idigit);
		if(idigit==0)
		{
			//printf("%d",idigit);
			return TRUE;
		}
		ino=ino/10;
	}
		
}
int main()
{
	int ino=0;
	int bret=FALSE;
	printf("enter the number");
	scanf("%d",&ino);
	bret=check(ino);
	if(bret==TRUE)
	{
		printf("it contains zero");
	}
	else
	{
		printf("it does not contain zero");
	}
	return 0;
	
}