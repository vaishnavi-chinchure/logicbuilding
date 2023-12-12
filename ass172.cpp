//write a application which accept filename from user and create that file


#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<unistd.h>
#include<fcntl.h>
using namespace std;


class filex
{
	public:
	int fd;
	filex(char name[])
	{
		fd=creat(name,O_CREAT);
		if(fd==-1)
		{
			cout<<"unable to create\n";
			exit(0);
		}
		else
		{
			cout<<"file created\n";
		}
	}
	void create()
	{
		char arr[20]={'\0'};
		read (fd,arr,10);
		printf("%s",arr);

	}
	~filex()
	{ close(fd);}
};
int main()
{
	char str[20];
	cout<<"enter file name\n";
	cin>>str;
	filex obj(str);
	obj.create();
	return 0;
	
}