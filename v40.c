//write a program which accpet range from user and display all numbers in between that range in 
//reverse order.
#include<stdio.h>
void reverse(int in1,int in2)
{
	int i=0;
	for(i=in2;i>=in1;i--)
	{
		printf("%d\t",i);
	}
}
int main()
{
	int ino1,ino2;
	printf("enter the first number");
	scanf("%d",&ino1);
	printf("enetr the second number");
	scanf("%d",&ino2);
	reverse(ino1,ino2);
	return 0;
}