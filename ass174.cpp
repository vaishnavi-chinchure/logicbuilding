#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<iostream>
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
	void size()
	{

		char arr[10];
		int iret=0;
		int count=0;
		
		while(iret=read(fd,arr,10)!=0)
		{	
			count=count+iret;
			
			//write(1,arr,ret);
		
		
		}
		printf("%d",count);
	
	}


};





int main()
{
	char str[10],ret=0;
	cout<<"enter filename\n";
	cin>>str;
	filex obj(str);
	obj.size();
	//cout<<"size of the file is"<<ret<<"\n";
	return 0;
}