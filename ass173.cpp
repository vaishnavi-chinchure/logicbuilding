//write a application which accept filename from user and open that file in a read mode
//input:demo.txt
//output:file opened successfully
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<fcntl.h>
#include<unistd.h>
using namespace std;
class filex
{
	public:
	int fd;
	filex(char name[])
	{
		fd=open(name,O_RDONLY);
		if(fd==-1)
		{
			cout<<"unable to open file";
			exit(0);
		}
		else
		{
			cout<<"file opened successfully\n";
		}
	}
	~filex()
	{
	close (fd);
	}
			
	void display()
	{
		char arr[10];
		int ret=0;
		while((ret=read(fd,arr,10))!=0)
		{
			//printf("%d",ret);
			write(1,arr,ret);
		}
	}
};
		



int main()
{
	char str[20];
	cout<<"enter file name\n";
	cin>>str;
	filex obj(str);
	obj.display();
	return 0;
}
