
#include<iostream>
using namespace std;
template<class T>
void display(T value,int isize)
{
	int i=0;
	for(i=1;i<=isize;i++)
	{
		cout<<value<<"\t";
	}
	cout<<"\n";
}
int main()
{
	display('M',7);
	display(11,3);
	display(3.7,6);
	return 0;
}