//accept n numbers from user and one number from user and return index of first occurence of that 
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
void index()
{
	int i=0;
	int count=0;
	for(i=0;i<num;i++)
	{
		if(arr[i]==NO)
		{
			cout<<"index of no is:"<<i<<"\n";
			break;
		}
		else
		{
			cout<<"index of no is doesn't exist";
			break;
		}
	}
	
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
	obj.index();
	
	return 0;
	
}
