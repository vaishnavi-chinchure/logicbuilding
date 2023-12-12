#include<iostream>
using namespace std;


typedef struct node
{
	int data;
	struct node* next;
	struct node* prev;  //+
	
}NODE,*PNODE;


class DoublyCL
{
	private:
	PNODE head;
	PNODE tail;     //+
	int isize;
	
	public:
	DoublyCL()
	{
		head=NULL;
		tail=NULL;    //+
		isize=0;
	}
	
	
	
	void InsertFirst(int);
	void InsertLast(int);
	void InsertAtposition(int,int);
	void DeleteFirst();
	void DeleteLast();
	void DeleteAtPosition(int);
	void Display();	
	int count();
	
};


void DoublyCL::InsertFirst(int ino)
{
	PNODE newn=new NODE;
	newn->data=ino;
	newn->next=NULL;
	newn->prev=NULL;
	if((head==NULL)&&(tail==NULL))   //if(isize==0)
	{
		head=newn;
		tail=newn;
	}
	else
	{
		newn->next=head;
		head->prev=newn;
		head=newn;
	
	}
	
	tail->next=head;
	head->prev=tail;
	isize++;
	
}

void DoublyCL::InsertLast(int ino)
{
	PNODE newn=new NODE;
	newn->data=ino;
	newn->next=NULL;
	newn->prev=NULL;
	if((head==NULL)&&(tail==NULL))   //if(isize==0)
	{
		head=newn;
		tail=newn;
	}
	else
	{
		tail->next=newn;
		newn->prev=tail;    // 
		tail=newn;
	
	}
	
	tail->next=head;
	head->prev=tail;
	isize++;
}
void DoublyCL::InsertAtposition(int ino,int ipos)
{
	if((ipos<1)||(ipos>isize+1))
	{
		return;
	}
	if(ipos==1)
	{
		InsertFirst(ino);
	}
	else if(ipos==isize+1)
	{
		InsertLast(ino);
	}
	else
	{
		PNODE newn=new NODE;
		newn->data=ino;
		newn->prev=NULL;
		newn->next=NULL;
		PNODE temp=head;
		for(int i=1;i<ipos-1;i++)
		{
			temp=temp->next;
		}
		
		newn->next=temp->next;
		temp->next->prev=newn;
		temp->next=newn;
		newn->prev=temp;
		
		isize++;
	}
}
void DoublyCL::DeleteFirst()
{
	if(isize==0)
	{
		return;
	}
	else if(isize==1)
	{
		delete head;
		head=NULL;
		tail=NULL;
		isize=0;
	}
	else
	{
		head=head->next;
		delete(tail->next);//delete (head->prev)
		tail->next=head;
		head->prev=tail;
		isize--;
	}
	
}
void DoublyCL::DeleteLast()
{
	if(isize==0)
	{
		return;
	}
	else if(isize==1)
	{
		delete head;
		head=NULL;
		tail=NULL;
		isize=0;
	}
	else
	{
		tail=tail->prev;
		delete(tail->next);//delete(head->next);
		tail->next=head;
		head->prev=tail;
		isize--;
	}
	
}
void DoublyCL::DeleteAtPosition(int ipos)
{
	if((ipos<1)||(ipos>isize))
	{
		return;
	}
	if(ipos==1)
	{
		DeleteFirst();
	}
	else if(ipos==isize)
	{
		DeleteLast();
	}
	else
	{
		PNODE temp=head;
		for(int i=1;i<ipos-1;i++)
		{
			temp=temp->next;
		}
		temp->next=temp->next->next;
		delete(temp->next->prev);
		temp->next->prev=temp;
		isize--;
	}
}
void DoublyCL::Display()
{
	PNODE temp=head;
	for(int i=1;i<=isize;i++)
	{
		cout<<temp->data<<"\t";
		temp=temp->next;
	}
	cout<<"\n";
}
int DoublyCL::count()
{
	return isize;
}

int main()
{
	DoublyCL obj;
	int ichoice=1;
	int ino=0,iret=0,ipos=0;
	
	
	while(ichoice!=0)
	{
		cout<<"enter your choice:\n";
		cout<<"1:Insert First\n";
		cout<<"2:Insert Last\n";
		cout<<"3:Insert at position\n";
		cout<<"4:Delete First\n";
		cout<<"5:Delete Last\n";
		cout<<"6:Delete At Position\n";
		cout<<"7:Display the elements\n";
		cout<<"8:count number of node\n";
		cout<<"0:Exit the application\n";
		cin>>ichoice;
		switch(ichoice)
		{
			case 1:
			cout<<"enter number\n";
			cin>>ino;
			obj.InsertFirst(ino);
			break;
			
			case 2:
			cout<<"enter number\n";
			cin>>ino;
			obj.InsertLast(ino);
			break;
			
			
			case 3:
			cout<<"enter number\n";
			cin>>ino;
			cout<<"enter position\n";
			cin>>ipos;
			obj.InsertAtposition(ino,ipos);
			break;
			
			case 4:
			obj.DeleteFirst();
			break;
			
			case 5:
			obj.DeleteLast();
			break;
			
			case 6:
			cout<<"enter position\n";
			cin>>ipos;
			obj.DeleteAtPosition(ipos);
			break;
			
			case 7:
			cout<<"elements of the LL are\n";
			obj.Display();
			break;
			
			case 8:
			iret=obj.count();
			cout<<"number of nodes are:"<<iret<<"\n";
			break;
			
			case 0:
			cout<<"thank you for using the application\n";
			break;
			
			default:
			cout<<"please enter proper position\n";
			break;
			
			
			
			
		}//end of switch
	}//end of while

	return 0;
}//end of main