#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node*next;

}NODE,*PNODE;

class queue
{
	private:
	PNODE head;
	int isize;
	
	public:
	queue();
	~queue();
	void enqueue(int);
	int dequeue();
	void display();
	int count();
	
};
queue::queue()//constructor
{
	cout<<"inside constructor\n";
	this->head=NULL;       //head=NULL;
	this->isize=0;
}
queue::~queue()// destructor
{
	cout<<"inside distructor\n";
	PNODE temp=NULL;
	while(head!=NULL)
	{
		temp=head;
		head=head->next;
		delete temp;
	}
}

void queue::enqueue(int ino)  //insert last
{
	
	PNODE newn= new NODE;
	newn->data=ino;
	newn->next=NULL;
	
	if(head==NULL)
	{
		head=newn;
	}
	else
	{
		PNODE temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newn;
		
	}
	isize++;
}

int queue::dequeue()//delete first
{
		
	int iret=-1;
	if(isize==0)
	{
		cout<<"queue is empty\n";
		//return iret;
	}
	else
	{
		PNODE temp=head;
		
		head=head->next;
		iret=temp->data;
		//return iret;
		delete temp;
		isize--;
		
	}
	
	return iret;
		
}
void queue::display()
{
	PNODE temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"\t";
		temp=temp->next;
	}
	cout<<"\n";
}
int queue::count()
{
	return this->isize;  //return isize;
	return 0;
}







int main()
{
	queue*qobj=new queue;
	int option=1,iret=0,ino=0;
	while (option!=0)
	{
		cout<<"please enter the option\n";
		cout<<"1:enqueue the element\n";
		cout<<"2:dequeue the element\n";
		cout<<"3:display the elements\n";
		cout<<"4:count the elements\n";
		cout<<"0:exit the application\n";
		cin>>option;
		
		switch(option)
		{
			case 1:
			cout<<"enter the element in queue\n";
			cin>>ino;
			qobj->enqueue(ino);
			break;
			
			case 2:
			iret=qobj->dequeue();
			cout<<"dequeued element is :"<<iret<<"\n";
			break;
			
			case 3:
			cout<<"elements of the stack are\n";
			qobj->display();
			break;
			
			case 4:
		
			iret=qobj->count();
			cout<<"count of elements are:"<<iret<<"\n";
			break;
			
			case 0:
			cout<<"thank you for using marvellous application\n";
			delete qobj;
			break;
			
			default :
			cout<<"enter proper input\n";
			break;
			
			}
	}
	return 0;
	}