//write a recursive program which accept number from user and return largest digit
//input:12376
//output:7
#include<stdio.h>
int largest(int ino)
{
	static int max=0;
	static int idigit=0;
	if(ino>0)
	{
		idigit=ino%10;
		if(idigit>=max)
		{
			 max=idigit;
			
		}
		ino=ino/10;
		largest(ino);
	}
	return max;
}


int main()
{
	int ivalue=0;
	int ret=0;
	printf("enter the ivalue");
	scanf("%d",&ivalue);
	ret=largest(ivalue);
	printf("%d",ret);
	return 0;
}