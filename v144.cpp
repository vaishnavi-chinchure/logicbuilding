#include<iostream>
using namespace std;
class arithmatic
{
	public:
	int ino;
	int *arr;
	arithmatic(int n)
	{
		ino=n;
		arr=new int[n];
	}
	void accept()
	{
		int i;
		for(i=0;i<ino;i++)
		{
			cin>>arr[i];
		}
	}
	void display()
	{
		int i=0;
		for(i=0;i<ino;i++)
		{
			
			cout<<"values are"<<arr[i];
		}
		cout<<"\n";
	}
	void calculation()
	{
		int i=0;
		for(int i=0;i<ino;i++)
		{
			if((arr[i]%3)==0&&(arr[i]%5)==0)
			{
				cout<<"values are which are divisible by 5 and 3:"<<arr[i]<<"\n";
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
	int ino=0;
	cout<<"enter the size\n";
	cin>>ino;
	arithmatic obj(ino);
	obj.accept();
	obj.display();
	obj.calculation();
	return 0;
}