//odd product
#include<iostream>
using namespace std;
class arithmatic
{
	public:
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
	}
	int oddproduct()
	{
		int i=0,product=1;
		for(i=0;i<isize;i++)
		{
			if(arr[i]%2!=0)
			{
				product=product*arr[i];
			}
		}
		return product;	
	}
};
int main()
{
	int isize,iret;
	cout<<"enter the isize\n";
	cin>>isize;
	arithmatic obj(isize);
	obj.accept();
	iret=obj.oddproduct();
	cout<<"product is:"<<iret;
	return 0;
}