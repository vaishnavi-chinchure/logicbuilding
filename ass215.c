//write a recursive program which accept number from user and return its recursive number
//input:1234
//output:4321


#include<stdio.h>
void reverse(int ino)
{
	static int idigit=0;
	if(ino>0)
	{
		idigit=ino%10;
		
		printf("%d",idigit);
		ino=ino/10;
		reverse(ino);
	}
}

int main()
{
	int ivalue=0;
	printf("enter the number");
	scanf("%d",&ivalue);
	reverse(ivalue);
}