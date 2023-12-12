#include<iostream>
using namespace std;
class arithmatic
{
	public:
	int *arr;
	int ino;
	
	arithmatic(int isize)
	{
		ino=isize;
		arr=new int[ino];
	}
	void accept()
	{
		int i=0;
		cout<<"enter the values\n";
		for(i=0;i<ino;i++)
		{
			cin>>arr[i];
		}
	}
	int evendivisible()
	{
		int i=0;
		for(i=0;i<ino;i++)
		{
			if(arr[i]%5==0&&arr[i]%2==0)
			{
				cout<<"values are\n";
				cout<<arr[i]<<"\n";
			}
			
		}
	}
	~arithmatic()
	{
		delete []arr;
	}
	
};

int main()
{
	int isize;
	cout<<"enter the size\n";
	cin>>isize;
	arithmatic obj(isize);
	obj.accept();
	obj.evendivisible();
	return 0;
}