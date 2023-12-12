#include<iostream>
using namespace std;
class arithmatic
{
	public:
	int size;
	int *arr;
	arithmatic(int isize)
	{
		size=isize;
		arr=new int[size];
	}
	void accept()
	{
		int i=0;
		for(i=0;i<size;i++)
		{
			cin>>arr[i];
		}
	}
	void display()
	{
		cout<<"values are\n";
		for(int i=0;i<size;i++)
		{
			cout<<arr[i]<<"\n";
		}
	}
	int frequency()
	{
		int count=0;
		for(int i=0;i<size;i++)
		{
			if(arr[i]%2==0)
			{
				count++;
			}
		}
	return count;	
	}
	
};



int main()
{
	int isize,iret;
	cout<<"enter the isize\n";
	cin>>isize;
	arithmatic obj(isize);
	obj.accept();
	obj.display();
	iret=obj.frequency();
	
	cout<<"count is :"<<iret;
	return 0;
}