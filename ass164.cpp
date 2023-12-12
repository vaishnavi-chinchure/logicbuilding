//accept n numbers from user and one number from user and return index of first occurence of that 
//number
#include<iostream>
using namespace std;
class arthematic
{
	public:
	int num;
	int *arr;
	int NO1,NO2;
	
		arthematic(int size)
		{
			num=size;
			arr=new int[size];
		}
	


void accept()
{
	int i=0;
	int start;
	int end;
	cout<<"enter the values in array\n";
	for(i=0;i<num;i++)
	{
	cin>>arr[i];
	}
	
}
void index()
{
	
	int i=0;
	int count=0;
	int start;
	int end;
	cout<<"enter the start\n";
	cin>>start;
	cout<<"enter the end\n";
	cin>>end;

	
	for(i=0;i<num;i++)
	{
		if((arr[i]>=start)&&(arr[i]<=end))
		{
			cout<<"values in the range "<<arr[i]<<"\n";
			
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
