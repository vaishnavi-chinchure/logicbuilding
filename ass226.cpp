#include<iostream>
using namespace std;
template<class T>
void reverse(T *arr,int isize)
{
	/*int temp,count=0,i,j;
	for(i=0;i<isize;i++)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		arr++;
		brr--;
	   
	}
	cout<<"\n";*/
	
	int count=0;
	int i=0;
		for(i=0;i<isize;i++)
		{
			arr++;
			count++;
			
		}
		printf("\n");
		arr--;
		
		while(count>0)
		{
			printf("%d\t",*arr);
			count--;
			arr--;
		}
		printf("\n");
	
}
int main()
{
	int arr[]={10,20,30,40,50,60,70,80,90};

	for(int i=0;i<9;i++)
	{
		cout<<arr[i];
	}
	cout<<"\n";
	 reverse(arr,9);
	 for(int i=0;i<9;i++)
	 {
		 cout<<arr[i]<<"\t";
	 }
	
	return 0;
}