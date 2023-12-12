#include<iostream>
using namespace std;
typedef struct node
{
	int data;
	struct node*next;
	struct node*prev;
	
}NODE,*PNODE;

class DoublyLL
{
	private:
	PNODE head;
	int isize;
	
	public:
	DoublyLL()
	{
		head=NULL;
		isize=0;
	}
	int count()
	{
		return isize;
	}
	
	void display()
	{
		PNODE temp=head;
		int i=0;
		for(i=1;i<=isize;i++)
		{
			cout<<temp->data<<"\t";
			temp=temp->next;
		}
		cout<<"\n";
	}
	
	
	
	void InsertFirst(int no)
	{
	
	PNODE newn=NULL;
	newn=new NODE;
	newn->data=no;
	newn->next=NULL;
	newn->prev=NULL;  //+ 
	
	if(head==NULL)     //LL is empty
	{
		head=newn;
		isize++;
	}
	else              //LL contains at least one node
	{
			newn->next=head;
			(head)->prev=newn;  //+
			head=newn;
			isize++;
	}
	
	}

	void InsertLast(int no)
	{
		PNODE newn=NULL;
		newn=new NODE;
		newn->data=no;
		newn->next=NULL;
		newn->prev=NULL;
		PNODE temp=head;
		if(head==NULL)
		{
			head=newn;
			isize++;
		}
		else
		{
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=newn;
			newn->prev=temp;
			isize++;
		}
		
		
	}
	
	
	void InsertAtPosition(int no,int ipos)
	{
		if((ipos<1)||(ipos>isize+1))
		{
			return;
		}
	if(ipos==1)
	{
		InsertFirst(no);
	}
	else if(ipos==isize+1)
	{
		InsertLast(no);
	}
	else
	{
		PNODE newn=new NODE;
		newn->data=no;
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
	void DeleteFirst()
	{
		if(head==NULL)
		{
			return;
		
		}
		else if((head->next)==NULL)
		{
			delete(head);
			head=NULL;
			
			isize--;
		}
		else 
		{
			head=head->next;
			delete (head->prev);
			head->prev=NULL;
			isize--;
			
		}
	}
	void DeleteLast()
	{
		if(head==NULL)
		{
			return;
		}
		else 
		{
			PNODE temp=head;
			while((temp->next->next)!=NULL)
			{
				
				temp=temp->next;
			}
				delete (temp->next);
				temp->next=NULL;
				isize--;
			
		}
	}
	void DeleteAtposition(int ipos)
	{
		PNODE temp=head;
		if((ipos<1)||(ipos>isize+1))
		{
			return;
		}
		else if(ipos==1)
		{
			DeleteFirst();
			
		}
		else if(ipos==isize)
		{
			DeleteLast();
		}
		else
		{
			int i=0;
			for(i=1;i<ipos-1;i++)
			{
				temp=temp->next;
			}
			
			
			temp->next=temp->next->next;
		delete(temp->next->prev);
		temp->next->prev=temp;
		isize--;
		}
	}
	
};
int main()
{
	DoublyLL obj;
	int iret=0,ivalue,ichoice=1,ipos;

	while(ichoice!=0)
	{
		cout<<"enter your choice\n";
		cout<<"1:insert first\n";
		cout<<"2:insert last\n";
		cout<<"3:insert at position\n";
		cout<<"4:delete first\n";
		cout<<"5:delete last\n";
		cout<<"6:delete at position\n";
		cout<<"7:display nodes\n";
		cout<<"8:number of nodes\n";
		cout<<"0:exit the application\n";
		cin>>ichoice;
	
	switch(ichoice)
	{
		case 1:
		cout<<"enter the value\n";
		cin>>ivalue;
		obj.InsertFirst(ivalue);
		break;

		case 2:
		cout<<"enter the value\n";
		cin>>ivalue;
		obj.InsertLast(ivalue);
		break;
		
		case 3:
		cout<<"enter the value\n";
		cin>>ivalue;
		cout<<"enter the position\n";
		cin>>ipos;
		obj.InsertAtPosition(ivalue,ipos);
		break;
		
		case 4:
		obj.DeleteFirst();
		break;
		
		case 5:
		obj.DeleteLast();
		break;
		
		case 6:
		cout<<"enter the position\n";
		cin>>ipos;
		obj.DeleteAtposition(ipos);
		break;
		
		case 7:
		obj.display();
		break;
		
		case 8:
		iret=obj.count();
		cout<<"number of nodes are:"<<iret<<"\n";
		break;
		
		case 0:
		cout<<"thank you for using marvellous application\n";
		break;

		default:
		cout<<"enter proper position\n";
		break;
	}
}
	return 0;
}

