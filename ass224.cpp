#include<iostream>
using namespace std;
template<class T>
T searchfirst(T *arr,int isize,T no)
{
	int i=0,count=0;
	for(i=0;i<isize;i++)
	{
		if(arr[i]==no)
		{
			return i+1;
			break;
		}
		
	}
	
}
int main()
{
	int arr[]={10,20,30,10,30,40,10,40,10};
	int iret=searchfirst(arr,9,40);
	cout<<iret<<"\n";
	return 0;
}