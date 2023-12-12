#include<iostream>
using namespace std;
#define TRUE 1
#define FALSE 0
class arithmatic
{
	public:
	int isize;
	int *arr;
	int no;
	arithmatic(int size)
	{
		isize=size;
		arr=new int[isize];
	}
	void accept()
	{
		int i=0;
		for(i=0;i<isize;i++)
		{
			cin>>arr[i];
		}
		cout<<"enter the no value\n";
		cin>>no;
	}
	bool check()
	{
		for(int i=0;i<isize;i++)
		{
			if(arr[i]==no)
			{
				return TRUE;
			}
		}
	}
};

int main()
{
	int isize,ret;
	cout<<"enter the isize\n";
	cin>>isize;
	arithmatic obj(isize);
	obj.accept();
	ret=obj.check();
	if(ret==TRUE)
	{
		cout<<"NO is present\n";
	}
	else
	{
		cout<<"NO is not present\n";
	}
	return 0;
	
}