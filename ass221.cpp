////write a generic program to accept n values from user and return addition of that values.
#include<iostream>
using namespace std;
template <class T>
T large(T*arr,int isize)
{
	
	 int i=0;
	T largeno=arr[0];
	
	for(i=0;i<isize;i++)
	{
		
		//largeno=arr[0];
		if(arr[i]<largeno)
		{
			largeno=arr[i];
		}
		
	}
	return largeno;
}
int main()
{
	int arr[]={60,20,30,50};
	float brr[]={10.0,3.7,9.8};
	int isum=large(arr,4);
	cout<<isum<<"\n";//5
	float fsum=large(brr,3);
	cout<<fsum<<"\n";//9.8
	return 0;
}
