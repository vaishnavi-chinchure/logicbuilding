#include<iostream>
using namespace std;

class arithmatic
{
	public:
	int ino;
	int *arr;
	arithmatic(int isize)
	{
		ino=isize;
		arr=new int[isize];
	}
	void accept()
	{
		int i;
		cout<<"enter the elements\n";
		for(i=0;i<ino;i++)
		{
			cin>>arr[i];
		}
	}
	
	int diff()
	{
		int i=0;
		int count1=0;
		int count2=0;
		int count=0;
		for(i=0;i<ino;i++)
		{
			if(arr[i]%2==0)
			{
				count1++;
				
			}
			else if(arr[i]%2!=0)
			{
				count2++;
			}
			count=count1-count2;
		}
		return count;
	}
	~arithmatic()
	{
		delete []arr;
	}
};





int main()
{
	int isize,iret=0;
	cout<<"enter the size:\n";
	cin>>isize;
	arithmatic obj(isize);
	obj.accept();
	iret=obj.diff();
	cout<<"difference of even number and odd numbers frequency is :"<<iret<<"\n";


}