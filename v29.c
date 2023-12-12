//accept one number from user and return the multiplication of all digits
#include<stdio.h>
int mult(int ino)
{
	int idigit=0,mult=1;
	while(ino>0)
	{
		idigit=ino%10;
		mult=mult*idigit;
		ino=ino/10;
	}return mult;
}
int main()
{
	int ino=0,ret=0;
	printf("enter the number");
	scanf("%d",&ino);
	ret=mult(ino);
	printf("multiplication is %d",ret);
	return 0;
}