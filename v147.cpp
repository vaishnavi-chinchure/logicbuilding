#include<iostream>
using namespace std;
class arithmatic
{
	public:
	int m=0;
	int *arr;
	
	arithmatic(int n)
	{
		m=n;
		arr=new int[m];
	}
	void accept()
	{
		int i=0;
		for(i=0;i<m;i++)
		{
			cin>>arr[i];
		}
	}
	int difference()
	{
		int counte=0,counto=0,diff=0;;
		for(int i=0;i<m;i++)
		{
			if(arr[i]%2==0)
			{
				counte++;
			}
			else
			{
				counto++;
			}
		}
		diff=counte-counto;
		return diff;
	}
};
int main()
{
	int n=0,iret;
	cout<<"enter the size\n";
	cin>>n;
	arithmatic obj(n);
	obj.accept();
	iret=obj.difference();
	cout<<"difference of even and odd number count is"<<iret;
	return 0;
}