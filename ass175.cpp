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
	
	void writedata()
	{
		char str[40]={0};
		cout<<"enter string\n";
		cin>>str;
	
			write(fd,str,40);
		
	}
	
};



int main()
{
	char str[20];
	cout<<"enter the file name\n";
	
	cin>>str;
	filex obj(str);
	
	//obj.accept();
	obj.writedata();
	return 0;
}

