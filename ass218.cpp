//write a generic program to find the largest number from three numbers
#include<iostream>
using namespace std;
template <class T>
T max(T ino1,T ino2, T ino3)
{
	if((ino1>ino2)&&(ino1>ino3))
	{
		printf("%d",ino1);
	}
	else if((ino2>ino1)&&(ino2>ino3))
	{
		printf("%d",ino2);
	}
	else
	{
		printf("%d",ino3);
	}
}
int main()
{
	int ino1=0,ino2=0,ino3=0;
	printf("enter the ino1,ino2,ino3\n");
	scanf("%d%d%d",&ino1,&ino2,&ino3);
	max(ino1,ino2,ino3);
	return 0;
}
