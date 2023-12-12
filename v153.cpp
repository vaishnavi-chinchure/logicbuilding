//accept n numbers from user and one number from user and return index of last occurence of that 
//number
#include<iostream>
using namespace std;
class arithmatic
{
	public:
	int ino;
	int size;
	int *arr;
	arithmatic(int isize)
	{
		size=isize;
		arr=new int[size];
	}
	void accept()
	{
		int i;
		for(i=0;i<size;i++)
		{
		    cin>>arr[i];
		}
		cout<<"enter the no value\n";
		cin>>ino;
	}
	int lastoccurence()
	{
		int i=0;
		for(i=size;i>=0;i--)
		{
			if(arr[i]==ino)
			{
				return i+1;
			}
		}
	}
};

int main()
{
	int isize,iret;
	cout<<"enter the size\n";
	cin>>isize;
	arithmatic obj(isize);
	obj.accept();
	iret=obj.lastoccurence();
	cout<<"last occurence index value:"<<iret;
	return 0;
}