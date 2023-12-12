//write a recursive program which accept number from user and return its product of digits
//input:523
//output:30

#include<stdio.h>
int mult(int ino)
{
	static  int imult=1;
	 static int idigit=0;
	if(ino>0)
	{
		idigit=ino%10;
		imult=imult*idigit;
		ino=ino/10;
		mult(ino);
		
	}
	return imult;
}


int main()
{
	int ivalue=0;
   int ret=0;
   printf("enter the ivalue");
   scanf("%d",&ivalue);
   
   ret=mult(ivalue);
   printf("%d",ret);
	
	return 0;
}