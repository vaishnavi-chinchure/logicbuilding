#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<fcntl.h>
#include<unistd.h>
#define TRUE 1
#define FALSE 0

using namespace std;
class filex
{
	public:
	int fd1;
	int fd2;
	filex(char name1[],char name2[])
	{
		char a1[20];
		char a2[20];
		fd1=open(name1,O_RDONLY);
		fd2=open(name2,O_RDONLY);
		if((fd1==-1)&&(fd2==-1))
		{
			cout<<"unable to open file\n";
			exit(0);
		}
		else
		{
			cout<<"file opened successfully\n";
		}
	}
	~filex()
	{
		close(fd1);
		close(fd2);
	}
	bool comparedata()
	{
		char arr[10];
		char brr[10];
		int ret1=0;
		int ret2=0;
		char m,n;
		while(((ret1=read(fd1,arr,10))!=0)||((ret2=read(fd2,brr,10))!=0))
		{
			//printf("%d",ret);
			m=write(1,arr,ret1);
			n=write(1,brr,ret2);
		}
		if(m=n)
		{
			return TRUE;

		}
		else
		{
			return FALSE;
		
		}
	}
};
int main()
{
	char str1[20];
	char str2[20];
	char ret;
	cout<<"enter the first file\n";
	cin>>str1;
	cout<<"enter the second file\n";
	cin>>str2;
	filex obj(str1,str2);
	ret=obj.comparedata();
	if(ret=true)
	{cout<<" same\n";}
	else
	{cout<<" not same\n";}
	return 0;
	
}
