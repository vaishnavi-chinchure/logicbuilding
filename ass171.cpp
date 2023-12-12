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
	filex (char name[])
	{
		fd=open(name,O_RDONLY);
		if(fd==-1)
		{
			cout<<"unable to open file\n";
			
			exit(0);
		}
		else
		{
			cout<<"file successfully opened\n";
		}
	}
	~filex()
	{
		close(fd);
	}
	void readmode()
	{
		char arr[20]={'\0'};
		read (fd,arr,10);
		printf("%s",arr);
	}
};




int main()
{
char str[30];
cout<<"enter the filename";
cin>>str;
filex obj(str);
obj.readmode();
return 0;
}