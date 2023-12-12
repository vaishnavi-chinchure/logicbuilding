//difference of even sum and odd sum
#include<iostream>
using namespace std;
class arithmatic
{
	public:
	int isize;
	int *arr;
	
	arithmatic(int ino) //constructor
	{
		isize=ino;
		arr=new int[isize];
	}
	void accept()
	{
		int i=0;
		cout<<"enter the elemenetc\n";
		for(i=0;i<isize;i++)
		{
			cin>>arr[i];
		}
	}
	void display()
	{
		int i=0;
		cout<<"values are"<<"\n";
		for(i=0;i<isize;i++)
		{
			cout<<arr[i]<<"\n";
		}
	}
	int difference()
	{
		int i=0,esum=0,osum=0,dif=0;
		for(i=0;i<isize;i++)
		{
			if(arr[i]%2==0)
			{
				esum=esum+arr[i];
			}
			else if((arr[i]%2)!=0)
			{
				osum=osum+arr[i];
			}
		}
		//cout<<esum;
		//cout<<osum;
		dif=esum-osum;
		return dif;
	}
	~arithmatic()  //distructor
	{
		delete []arr;
	}
};
int main()
{
	int isize,iret;
	cout<<"enter the size\n";
	cin>>isize;
	arithmatic obj(isize);
	obj.accept();
	obj.display();
	iret=obj.difference();
	cout<<"difference is"<<iret<<"\n";
	return 0;
	
}