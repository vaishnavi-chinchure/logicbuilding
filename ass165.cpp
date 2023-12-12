#include<iostream>
using namespace std;
class arthematic
{
	public:
	int num;
	int ino;
	int *arr;
	arthematic(int size)
	{
		num=size;
		arr=new int[size];
	}

void accept()
{
	int i=0;
	int c=0;
	cout<<"enter the elements in array";
	for(i=0;i<num;i++)
	{
		cin>>arr[i];
	}
}
int oddproduct()
{
	int i=0;
	int c=1;
	for(i=0;i<num;i++)
	{
		if(arr[i]%2==1)
		{
			
			c=c*arr[i];
		}
		
		
	}
	
	return c;
}
~arthematic()
{
	delete []arr;
}
};

int main()
{
	int ret,size;
	cout<<"enter the size of array";
	cin>>size;
	arthematic obj(size);
	obj.accept();
	ret=obj.oddproduct();
	cout<<"odd number product is"<<ret<<"\n";
	return 0;
}
	
	