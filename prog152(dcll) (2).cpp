#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node*next;
	
}NODE,*PNODE;

class SinglyCL
{
	private:
	PNODE head;
	PNODE tail;
	int isize;
	
	public:
	SinglyCL()
	{
		head=NULL;
		tail=NULL;
		isize=0;	
	}
	
	
	void InsertFirst(int ino)
	{
		PNODE newn=NULL;
		newn=new NODE;
		newn->data=ino;
		newn->next=NULL;
		if((head==NULL)&&(tail==NULL))//LL is empty
		{
			head=newn;
			tail=newn;
			//isize++;
			//tail->next=head;
		}
		else                          //LL contains one node
		{
			newn->next=head;
			head=newn;
			//isize++;
			//tail->next=head;
		}
		isize++;
		tail->next=head;
	}
	
	
	void InsertLast(int ino)
	{
		PNODE newn=NULL;
		newn=new NODE;
		newn->data=ino;
		newn->next=NULL;
		if((head==NULL)&&(tail==NULL))//LL is empty
		{
			head=newn;
			tail=newn;
			//isize++;
			//tail->next=head;
		}
		else                          //LL contains one node
		{
			tail->next=newn;
			tail=tail->next;     //
			//isize++;
			//tail->next=head;
		}
		isize++;
		tail->next=head;
	}
	
	
	
	
	int count()
	{
		return isize;
	}
	void Display()
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
	
	
	void Deletefirst()
	{
		if(isize==0)   //empty
		{
			return;
		}
		else if(isize==1)//single 
		{
			delete head;
			head=NULL;
			tail=NULL;
			isize--;
		}
		
		else  //more than one node
		{
			head=head->next;
			delete(tail->next);
			tail->next=head;
			isize--;
		}
	}
	
	
	void DeleteLast()
	{
		if(isize==0)   //empty
		{
			return;
		}
		else if(isize==1)//single node if(head==tail)
		{
			delete head;
			head=NULL;
			tail=NULL;
			isize--;
		}
		
		else  //more than one node
		{
			PNODE temp=head;
			int i=0;
			for(i=1;i<isize-1;i++)
			{
				temp=temp->next;
			}
			delete tail;
			tail=temp;
			tail->next=head;
			isize--;
		}
	}
	
	void InsertAtposition(int ino,int ipos)
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
		
		newn->next=NULL;
		PNODE temp=head;
		for(int i=1;i<ipos-1;i++)
		{
			temp=temp->next;
		}
		
		newn->next=temp->next;
		
		temp->next=newn;

		
		isize++;
	}
	}
	
	void DeleteAtPosition(int ipos)
	{
		if((ipos<1)||(ipos>isize))
	{
		return;
	}
	if(ipos==1)
	{
		Deletefirst();
	}
	else if(ipos==isize)
	{
		DeleteLast();
	}
	else
	{
		PNODE temp=head;
		PNODE target=NULL;
		for(int i=1;i<ipos-1;i++)
		{
			temp=temp->next;
		}
		
				target=temp->next;
				temp->next=target->next;
				delete target;
		
		
		isize--;
	}

	}
	
};
int main()
{
	SinglyCL obj;
	int ichoice=1,iret=0,ipos=0,ivalue=0;
	while(ichoice!=0)
	{
		cout<<"enter your choice\n";
		cout<<"1:Insert First\n";
		cout<<"2:Insert Last\n";
		cout<<"3:Insert at position\n";
		cout<<"4:Delete first\n";
		cout<<"5:Delete Last\n";
		cout<<"6:Delete at position\n";
		cout<<"7:display the contents\n";
		cout<<"8:cout the elements\n";
		cout<<"0:exit the function\n";
		cin>>ichoice;
		
		switch(ichoice)
		{
			case 1:
			cout<<"enter number\n";
			cin>>ivalue;
			obj.InsertFirst(ivalue);
			break;
			
			case 2:
			cout<<"enter number\n";
			cin>>ivalue;
			obj.InsertLast(ivalue);
			break;
			
			case 3:
			cout<<"enter value\n";
			cin>>ivalue;
			cout<<"enter position\n";
			cin>>ipos;
			obj.InsertAtposition(ivalue,ipos);
			break;
			
			case 4:
			obj.Deletefirst();
			break;
			
			case 5:
			obj.DeleteLast();
			break;
			
			case 6:
			cout<<"enter the position\n";
			cin>>ipos;
			obj.DeleteAtPosition(ipos);
			break;
			
			case 7:
			obj.Display();
			break;
			
			case 8:
			iret=obj.count();
			cout<<"number of nodes are:"<<iret;
			break;
			
			case 0:
			cout<<"thank you for using the application\n";
			break;
			
			default:
			cout<<"please enter proper option\n";
			break;
			
			

			
		}//end of switch
		
	}//end of while
	return 0;
	
}


