//write a generic program to accept n values from user and return addition of that values.
#include<iostream>
using namespace std;
template <class T>
T addn(T*arr,int isize)
{
	T isum=0;
	int i=0;

	for(i=0;i<isize;i++)
	{
		isum=isum+arr[i];
	}
	return isum;
}
int main()
{
	int arr[]={10,20,30,40,50};
	float brr[]={10.0,3.7,9.8,8.7};
	int isum=addn(arr,5);
	printf("%d\n",isum);
	float fsum=addn(brr,4);
	printf("%f\n",fsum);
	return 0;
}
