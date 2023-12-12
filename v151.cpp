#include<iostream>
using namespace std;
class arithmatic
{
	public:
	int isize;
	int no;
	int *arr;
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
	int frequency()
	{
		int count=0;
		for(int i=0;i<isize;i++)
		{
			if(arr[i]==no)
			{
				count++;
			}
		}
		return count;
	}
	
};
int main()
{
	int ino=0,iret=0;
	cout<<"enter the size of an arraay\n";
	cin>>ino;
	arithmatic obj(ino);
	obj.accept();
	iret=obj.frequency();
	cout<<"frequency of NO is:"<<iret;
	return 0;
}