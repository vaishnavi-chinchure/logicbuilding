//display range values

#include<iostream>
using namespace std;
class arithmatic
{
	public:
	int start;
	int end;
	int isize;
	int *arr;
	arithmatic(int ino)
	{
		isize=ino;
		arr=new int[isize];
	}
	void accept()
	{
		int i=0;
		for(i=0;i<isize;i++)
		{
			cin>>arr[i];
		}
		cout<<"enter start\n";
		cin>>start;
		cout<<"enter end\n";
		cin>>end;
	}
	void range()
	{
		int i=0;
		cout<<"range values are:";
		for(i=0;i<isize;i++)
		{
			if(arr[i]>=start&&arr[i]<=end)
			{
				cout<<arr[i];
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
	obj.range();
    return 0;
	
}
