#include<iostream>
using namespace std;
#define TRUE 1
#define FALSE 0

class arithmatic
{
	public:
	int *arr;
	int ino;
	arithmatic(int size)
	{
		ino=size;
		arr=new int[ino];
	}
	void accept()
	{
		int i=0;
		cout<<"enter elements\n";
		for(i=0;i<ino;i++)
		{
			cin>>arr[i];
			
		}
	}
	bool check()
	{
		int i=0;
		for(i=0;i<ino;i++)
		{
			if(arr[i]==11)
			{
				return TRUE;
			}
			else
			{
				return FALSE;
			}
		}
	}
	~arithmatic()
	{delete []arr;}
	
};

int main()
{
	int size,ret;
	cout<<"enter the array size\n";
	cin>>size;
	 arithmatic obj(size);
	 obj.accept();
	 ret=obj.check();
	
	 if(ret==TRUE)
	 {
		 cout<<"11 is present\n";
	 }
	 else
	 {
		 cout<<"11 is not present";
	 }
	 return 0;
}