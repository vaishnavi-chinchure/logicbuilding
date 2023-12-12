//write a recursive program which accept string from user and return its factorial 
//input: 5
//output: 120
#include<stdio.h>
int fact(int ino)
{
    int i=ino;
	static int mult=1;
	if(i>=1)
	{
		mult=mult*i;
	   ino--;	
	   fact(ino);
	}
	return mult;
}


int main()
{
	int ivalue=0;
	int ret=0;
	printf("enter the value ");
	scanf("%d",&ivalue);
	ret=fact(ivalue);
	printf("%d",ret);
	return 0;
}