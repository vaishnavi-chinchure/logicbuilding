#include<iostream>
using namespace std;
class arithmatic
{
	public:
	int num=0;
	int *arr;
	arithmatic(int ino)
	{
		num=ino;
		arr=new int[num];
	}
	void accept()
	{
		int i=0;
		cout<<"enter the values\n";
		for(i=0;i<num;i++)
		{
			cin>>arr[i];
		}
	}
	void display()
	{
		int i=0;
		for(i=0;i<num;i++)
		{
			cout<<"values are:"<<arr[i]<<"\n";
			
		}
	}
	int frequency()
	{
		int count=0,i=0;
		for(i=0;i<num;i++)
		{
			if(arr[i]%2==0)
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
	int ino,iret=0;
	cout<<"enter the size of array\n";
	cin>>ino;
	arithmatic obj(ino);
	obj.accept();
	obj.display();
	iret=obj.frequency();
	cout<<"even number frequency is:"<<iret<<"\n";
	return 0;
	
}