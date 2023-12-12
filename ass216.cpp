/*1:searchfirst
2:searchlast
3:frequecy
4:evencount
5:oddcount
6:sum of all
*/

#include<iostream>
using namespace std;

class array
{
	protected:
		int *arr;
		int size;
		
	public:
	array(int value=10)
	{
		cout<<"inside constructor\n";
		
		this->size=value;
		this->arr=new int[size];
	}
	array(array&ref)
	{
		cout<<"inside copy constructor\n";
		
		this->size=ref.size;
		this->arr=new int[this->size];
		
		for(int i=0;i<size;i++)
		{
			this->arr[i]=ref.arr[i];
		
		}
	}
	~array()
	{
		cout<<"inside destructor\n";
		delete[]arr;
	}
	inline void accept();
	inline void display();
	
};
void array::accept()
{
	cout<<"please enter the values\n";
	for(int i=0;i<this->size;i++)
	{
		cin>>arr[i];
	}
}	
void array::display()
{
	cout<<"elements are\n";
	for(int i=0;i<this->size;i++)
	{
		cout<<arr[i]<<"";
	}
	cout<<"\n";
}	

class arrsearch:public array
{
	public:
	arrsearch(int no=10):array(no)
	{}
	
	int frequency(int);
	int searchfirst(int);
	int searchlast(int);
    int evencount();
	int oddcount();
	int sum();
};
int arrsearch::searchfirst(int value)
{
	int i=0;
	for(i=0;i<size;i++)
	{
		if(arr[i]==value)
		{
			break;
		}
	}
	if(i==size)
	{
		return -1;
	}
	else
	{
		return i+1;
	}
}
int arrsearch::frequency(int value)
{
	int icnt=0;
	for(int i=0;i<size;i++)
	{
		if(arr[i]==value)
		{
			icnt++;
		}
	}
	return icnt;
}
int arrsearch::searchlast(int value)
{
	int i=0;
	for(i=size;i>0;i--)
	{
		if(arr[i]==value)
		{
			break;
		}
	}
	if(i==size)
	{
		return -1;
	}
	else
	{
		return i+1;
	}
}
int arrsearch::evencount()
{
	int i=0;
	int count=0;
	for(i=0;i<size;i++)
	{
		if(arr[i]%2==0)
		{
			count++;
		}
	
	}
		return count;
}
int arrsearch::oddcount()
{
	int i=0;
	int count=0;
	for(i=0;i<size;i++)
	{
		if(arr[i]%2!=0)
		{
			count++;
		}
	
	}
		return count;
}
int arrsearch::sum()
{
	int i=0;
	int sum=0;
	for(i=0;i<size;i++)
	{
		sum=sum+arr[i];
	}
		return sum;
}
int main()
{
	cout<<"inside main\n";
	
	arrsearch sobj1(5);
	sobj1.accept();
	sobj1.display();
	
	int ret=sobj1.frequency(11);
	cout<<"frequency is"<<ret<<"\n";
	int iret=sobj1.searchfirst(11);
	cout<<"first occurance is"<<iret<<"\n";
	int ret1=sobj1.searchlast(11);
	cout<<"last occurance is"<<ret1<<"\n";
	int ret2=sobj1.evencount();
	cout<<"even count is"<<ret2<<"\n";
	int ret3=sobj1.oddcount();
	cout<<"odd  count is"<<ret3<<"\n";
	int ret4=sobj1.sum();
	cout<<"odd  count is"<<ret4<<"\n";

	return 0;
}