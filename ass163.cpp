//accept n numbers from user and one number from user and return index of last occurence of that 
//number
#include<iostream>
using namespace std;
class arthematic
{
	public:
	int num;
	int *arr;
	int NO;
	
		arthematic(int size)
		{
			num=size;
			arr=new int[size];
		}
	


void accept()
{
	int i=0;
	cout<<"enter the values in array\n";
	for(i=0;i<num;i++)
	{
	cin>>arr[i];
	}
	cout<<"enter the NO value\n";
	cin>>NO;
}
int lastindex()
{
	int i=0;
	int count=0;
	for(i=num;i>=0;i--)
	{
		if(arr[i]==NO)
		{
			return i;
			
		}

		
	}return i;
	
}
~arthematic()
{
	delete[]arr;
}
	
};	
	
	
int main()
{
	int size,ret;
	cout<<"enter the size of array\n";
	cin>>size;
	arthematic obj(size);
	obj.accept();
	ret=obj.lastindex();
	cout<<"index is :"<<ret<<"\n";
	return 0;
	
}
