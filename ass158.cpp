#include<iostream>
using namespace std;
class arithmatic
{
	public:
	int ino;
	int *arr;
	arithmatic(int size)
	{
		ino=size;
		arr=new int[ino];
	}
	void accept()
	{
		int i=0;
		cout<<"enter the contents of the array\n";
		for(i=0;i<ino;i++)
		{
			cin>>arr[i];
		}
	}
	int frequency()
	{
		int i=0;
		int count=0;
		for(i=0;i<ino;i++)
		{
			if(arr[i]==11)
			{
				count++;
			}
			
		}
		return count;
	}
	
	~arithmatic()
	{
		delete []arr;
	}
};




int main()
{
	int size,ret;
	cout<<"enter the size of the array\n";
	cin>>size;
	arithmatic obj(size);
	obj.accept();
	ret=obj.frequency();
	cout<<"frequency of 11 is :"<<ret<<"\n";
	return 0;
}