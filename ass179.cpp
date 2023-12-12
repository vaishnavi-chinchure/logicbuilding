#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
using namespace std;
class filex
{
	public:

	int fd;
	filex(char name[])
	{
		char a[20];
		fd=open(name,O_WRONLY|O_APPEND);
		
		if(fd==-1)
		{
			cout<<"unable to open file\n";
			exit(0);
		}
		else
		{
			cout<<"file opened\n";
		}
	}
		~filex()
		{
			close(fd);
		}
	
	int writedata()
	{
		char st[40]={0};
		int count;
		cout<<"enter string\n";
		cin>>st;
		while(fd(str,st)==0)
		{count++;}
	
		
		
	return count;
	}
};



int main()
{
	char str[20];
	int ret;
	cout<<"enter the file name\n";
	
	cin>>str;
	filex obj(str);
	
	//obj.accept();
	ret=obj.writedata();
	cout<<"count is"<<ret<<"\n";
	return 0;
}

