//write a generic program to multiply two numbers
#include<iostream>
using namespace std;

template<class T>
T multiply(T no1,T no2)
{
	T ans;
	ans=no1*no2;
	return ans;
}
int main()
{
	int iret=multiply(10,20);
	cout<<iret<<"\n";
	float fret=multiply(10.0f,20.0f);
	cout<<fret<<"\n";
	return 0;
}
