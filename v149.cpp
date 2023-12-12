#include<iostream>
using namespace std;
#define TRUE 1
#define FALSE 0
//typedef int BOOL;

class arithmatic
{
	public:
	int ino;
	int *arr;
	
	arithmatic(int n)
	{
		ino=n;
		arr=new int[ino];
	}
	void accept()
	{
		int i=0;
		for(i=0;i<ino;i++)
		{
			cin>>arr[i];
		}
	}
	bool check()
	{
		int i=0;
		for(i=0;i<ino;i++)
		{
			if(arr[i]==11)
			{
				return TRUE;
			}
			
		}
	}
};
int main()
{
	int isize,bret;
	cout<<"enter the size\n";
	cin>>isize;
	arithmatic obj(isize);
	obj.accept();
	bret=obj.check();
	if(bret==TRUE)
	{
		cout<<"11 is present\n";
	}
	else
	{
		cout<<"11 is not present\n";
	}
	return 0;
	
}