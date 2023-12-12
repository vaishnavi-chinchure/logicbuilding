
#include<iostream>
using namespace std;
template<class T>
int frequency(T *arr,int isize,T no)
{
	int i=0,count=0;
	for(i=0;i<=isize;i++)
	{
		if(arr[i]==no)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int arr[]={10,20,30,10,30,40,10,40,10};
	int iret=frequency(arr,9,10);
	cout<<iret<<"\n";
	return 0;
}