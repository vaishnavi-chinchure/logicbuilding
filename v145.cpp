#include<iostream>
using namespace std;
class arithmatic
{
	public:
	int *arr;
	int isize;
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
	}
	void display()
	{
		int i=0;
		cout<<"values are\n";
		for(i=0;i<isize;i++)
		{
			
			cout<<arr[i]<<"\n";
		}
			
	}
};


int main()
{
	int size;
	cout<<"enter the size\n";
	cin>>size;
	arithmatic obj(size);
	obj.accept();
	obj.display();
	return 0;
}