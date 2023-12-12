//accept n numbers from user and one number from user and return index of first occurence of that 
//number
#include<iostream>
using namespace std;
class arithmatic
{
	public:
	int no;
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
		cout<<"enter the elements\n";
		for(i=0;i<size;i++)
		{
			cin>>arr[i];
		}
		cout<<"enter the no value\n";
		cin>>no;
	}
	int firstoccurence()
	{
		int i=0;
		for(i=0;i<size;i++)
		{
			if(arr[i]==no)
			{
				return i+1;
				break;
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
	iret=obj.firstoccurence();
	cout<<"first occurence index no is:"<<iret;
	return 0;
}