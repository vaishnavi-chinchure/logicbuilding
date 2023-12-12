#include<iostream>
using namespace std;
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
	
		for(int i=0;i<ino;i++)	
		{
			cin>>arr[i];
		}	
	}
	int frequency()
	{
		int i=0,count=0;
		for(int i=0;i<ino;i++)
		{
			if(arr[i]==11)
			{
				count++;
			}
		}
		return count;
	}
};
int main()
{
	int isize,iret=0;
	cout<<"enter the size\n";
	cin>>isize;
	arithmatic obj(isize);
	obj.accept();
	iret=obj.frequency();
	cout<<"frequency of 11 is:"<<iret;
	return 0;
}