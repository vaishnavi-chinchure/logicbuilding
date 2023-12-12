//write a application which accept file name and one charracter from user.count the frequency 
//of that charracter.
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<iostream>
using namespace std;
class filex
{
	public:
	//void accept()
	//{
		//char a[20];
		//cout<<"enter the string\n";
		//cin>>a;
	//}
	int fd;
	filex(char name[])
	{
		char a[20];
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
	
	void display()
	{
		char str[40]={0};
	char n;
		int i=0;
		int count;
		cout<<"enter charracter\n";
		cin>>n;
		while(i!=str[i])
		{
		if(str[i]==n)
		{
			count++;
		
			
		}i++;
		}printf("count is %d",count);
	}
};



int main()
{
	int ret=0;
	char str[20];
	cout<<"enter the file name\n";
	
	cin>>str;
	filex obj(str);
	
	//obj.accept();
	obj.display();
	//cout<<"frequency is "<<ret<<"\n";
	return 0;
}

