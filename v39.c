//write a program which accpet range from user and return addition of all even numbers 
//between that range.
#include<stdio.h>
int display(int n1,int n2)
{
	int i=0,add=0;
	for(i=n1;i<=n2;i++)
	{
		if(i%2==0)
		{
			add=add+i;
		}
	}return add;
}

int main()
{
	int ino1,ino2,ret;
	printf("enter the first number");
	scanf("%d",&ino1);
	printf("enter the second number");
	scanf("%d",&ino2);
	ret=display(ino1,ino2);
	printf("addition is %d",ret);
	return 0;
} 