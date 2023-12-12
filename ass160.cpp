#include<iostream>
using namespace std;
class arithmatic
{
	public:
	int num;
	int *arr;
	int NO;
	arithmatic(int size)
	{
		num = size;
		arr=new int[size];
	}
	void accept()
	{
		int i=0;
		cout<<"enter the elements\n";
	for(i=0;i<num;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter the NO value\n";
	cin>>NO;
	
	}
	frequency()
	{
		int i=0;
		int count=0;
		for(i=0;i<num;i++)
		{
			if(arr[i]==NO)
			{
				count++;
			}
		}
		return count;
		
	}
	~arithmatic()
	{delete []arr;}
};




int main()
{
	int size,ret;
	cout<<"enter the size:";
	cin>>size;
	arithmatic obj(size);
	obj.accept();
	ret=obj.frequency();
	cout<<"frequency of NO is:"<<ret<<"\n";
	return 0;
}