#include<iostream>
using namespace std;
template <class T>
struct node
{
	T data;
	struct node*next;
	struct node*prev;
};

template<class T>
class singlyLL
{
	private:
	struct node<T>* head;
	int isize;
	
	public:
	singlyLL();
	void displaySL();
	int countSL();
	void insertfirstSL(T);
	void insertlastSL(T);
	void insertatpositionSL(T,int ipos);
	void deletefirstSL();
	void deletelastSL();
	void deleteatpositionSL(int ipos);	
	int summation();
	int searchfirstoccurence(int no);
	int searchlastoccurence(int no2);
};

template<class T>
class singlyCL
{
	private:
	struct node<T>* head;
	struct node<T>* tail;
	int isize;
	
	public:
	singlyCL();
	void displaySC();
	int countSC();
	void insertfirstSC(T);
	void insertlastSC(T);
	void insertatpositionSC(T,int ipos);
	void deletefirstSC();
	void deletelastSC();
	void deleteatpositionSC(int ipos);

};

template <class T>
void singlyLL<T>::insertfirstSL(T no)
{
		struct node<T>*newn=new struct node<T>;
		newn->data=no;
		newn->next=NULL;
		newn->next=head;
		head=newn;
		isize++;
}

template <class T>
void singlyLL<T>::insertlastSL(T no)
{
		struct node<T>*newn=new struct node<T>;
		newn->data=no;
		newn->next=NULL;

		struct node<T>*temp=head;
		if(head==NULL)
		{
			head=newn;
		}
		else
		{
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=newn;
		}
		isize++;		
}

template <class T>
void singlyLL<T>::insertatpositionSL(T no,int ipos)
{
		struct node<T>*newn=new struct node<T>;
		newn->data=no;
		newn->next=NULL;
		
		struct node<T>*temp=head;
		int i=0;
		
		if(head==NULL)
		{
			head=newn;	
		}
		else if(ipos==1)
		{
				return insertfirstSL(no);	
		}
		else if(ipos==isize+1)
		{
				return insertlastSL(no);
		}
		else 
		{
			for(i=1;i<ipos-1;i++)
			{
				temp=temp->next;
			}
			newn->next=temp->next;
			temp->next=newn;
		}
		isize++;
}

template <class T>
void singlyLL<T>::deletefirstSL()
{
	if(head != NULL)
    {
        struct node<T>*temp=head;
        head = head -> next;
        delete temp;
        isize--;
    }
}
	
template <class T>
void singlyLL<T>::deletelastSL()
{
    if(head != NULL)
    {
        struct node<T>*temp=head;
        head = head -> next;
        delete temp;
        isize--;
    }
}

template <class T>
void singlyLL<T>::deleteatpositionSL(int ipos)
{
	int i=0;
	struct node<T>*temp=head;
	struct node<T>*target=NULL;
			
	if(ipos<0||ipos>isize+1)
	{
		return;
	}
	else if(ipos==1)
	{
		return deletefirstSL();
	}
	else if(ipos==isize)
	{
		return deletelastSL();
	}
	else
	{
		for(i=1;i<ipos-1;i++)
		{
			temp=temp->next;
		}
				
		target=temp->next;
		temp->next=target->next;
		delete target;
	}
	isize--;
}

template <class T>
int singlyLL<T>::countSL()
{
	return isize;
	return 0;
}

template <class T>
void singlyLL<T>::displaySL()
{
	struct node<T>*temp=head;
	while(temp!=NULL)
	{
		//cout<<"elements of the SINGLY LINEAR LINKED LIST are\n";
		cout<<temp->data<<"\t";
		temp=temp->next;
	}
	cout<<"\n";
}

template<class T>
int singlyLL<T>::summation()
{
	int sum=0;
	
	while(head!=NULL)
	{
		sum=sum+head->data;
		head=head->next;
	}
	
	return sum;
}
template<class T>
int singlyLL<T>::searchfirstoccurence(int no)
{
	int count=0;
	while(head!=NULL)
	{
		count++;
		if(head->data==no)
		{
			break;
		}
		head=head->next;
	}
		return count;
		
}

template<class T>
int singlyLL<T>::searchlastoccurence(int no2)
{
	
	int count=0;
	int i=0;
	int m=0;
	while(head!=NULL)
	{
		count++;
		m=count;
		head=head->next;
	
	//printf("%d",count);
	
	}

	for(i=m;i>=0;i--)
		{
		if(head->data==no2)
		{			
			break;
		}
	}
	return i;
	
}


template <class T>
singlyLL<T>::singlyLL()
{
		head=NULL;
		isize=0;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////




template <class T>
void singlyCL<T>::insertfirstSC(T no)
{	
	struct node<T>*newn=new struct node<T>;
	newn->data=no;
	newn->next=NULL;
	
	if((head==NULL)&&(tail==NULL))
	{
		head=newn;
		tail=newn;	
	}
	else
	{
		newn->next=head;
		head=newn;
	}
	isize++;
	tail->next=head;
		
}

template <class T>
void singlyCL<T>::insertlastSC(T no)
{
	struct node<T>*newn=new struct node<T>;
	newn->next=NULL;
	newn->data=no;
		
	if((head==NULL)&&(tail==NULL))
	{
		head=newn;
		tail=newn;
	}
	else
	{
		tail->next=newn;
		tail=tail->next;
	}
	isize++;
	tail->next=head;	
		
}

template <class T>
void singlyCL<T>::insertatpositionSC(T no,int ipos)
{
		struct node<T>*newn=new struct node<T>;
		newn->data=no;
		newn->next=NULL;
		
		struct node<T>*temp=head;
		int i=0;
	
		if(head==NULL)
		{
			head=newn;	
		}
		else if(ipos==1)
		{
			return insertfirstSC(no);	
		}
		else if(ipos==isize+1)
		{
			return insertlastSC(no);
		}
		else 
		{
			for(i=1;i<ipos-1;i++)
			{
				temp=temp->next;
			}
			newn->next=temp->next;
			temp->next=newn;
				
		}
		isize++;
		
}


template <class T>
void singlyCL<T>::deletefirstSC()
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
		isize--;
	}
	else
	{
		head=head->next;
		delete(tail->next);
		tail->next=head;
		isize--;
	}
}
	
	
template <class T>
void singlyCL<T>::deletelastSC()
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
	   isize--;	   
	}
	else
   {
	   struct node<T>*temp=head;
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

template <class T>
void singlyCL<T>::deleteatpositionSC(int ipos)
{
	int i=0;
	struct node<T>*temp=head;
	struct node<T>*target=NULL;
			
	if(ipos<0||ipos>isize+1)	
    {
		return;
    }
	else if(ipos==1)
	{
		return deletefirstSC();
	}
	else if(ipos==isize)
	{
		return deletelastSC();
	}
	else
	{
	for(i=1;i<ipos-1;i++)
	{
		temp=temp->next;
	}
	target=temp->next;
	temp->next=target->next;
	delete target;
	}
	isize--;
}

template <class T>
int singlyCL<T>::countSC()
{
	return isize;
	return 0;
}


template <class T>
void singlyCL<T>::displaySC()
{
	struct node<T>*temp=head;
	int i=0;
	for(i=1;i<=isize;i++)
	{
		cout<<"elements of the SINGLY CIRCULAR LINKD LIST are\n";
		cout<<temp->data<<"\t";
		temp=temp->next;
	}
	cout<<"\n";
}

template <class T>
singlyCL<T>::singlyCL()
{
	head=NULL;
	tail=NULL;
	isize=0;
}


//////////////////////////////////////////////////////////////////////////////////////////////
/*struct node
{
	T data;
	struct node*next;
	struct node*prev;
};*/


template<class T>
class DoublyLL
{
	private:
	struct node<T>* head;
	
	int isize;
	
	public:
	DoublyLL();
	void displayDL();
	int countDL();
	void insertfirstDL(T);
	void insertlastDL(T);
	void insertatpositionDL(T,int ipos);
	void deletefirstDL();
	void deletelastDL();
	void deleteatpositionDL(int ipos);
	
	
};
template <class T>
void DoublyLL<T>::insertfirstDL(T no)
{
	struct node<T>*newn=new struct node<T>;
	newn->data=no;
	newn->next=NULL;
	
	if(head==NULL)     
	{
		head=newn;
		isize++;
	}
	else              
	{
		newn->next=head;
		(head)->prev=newn;  
		head=newn;
		isize++;
	}
}

template <class T>
void DoublyLL<T>::insertlastDL(T no)
{
	struct node<T>*newn=new struct node<T>;
	newn->next=NULL;
	newn->data=no;
	struct node<T>*temp=head;

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

template <class T>
void DoublyLL<T>::insertatpositionDL(T no,int ipos)
{
	struct node<T>*newn=new struct node<T>;
	newn->data=no;
	newn->next=NULL;
		
	struct node<T>*temp=head;
	int i=0;	
	if((ipos<1)||(ipos>isize+1))
	{
		return;
	}
	if(ipos==1)
	{
		insertfirstDL(no);
	}
	else if(ipos==isize+1)
	{
		insertlastDL(no);
	}
	else
	{
		struct node<T>*newn=new struct node<T>;
		struct node<T>*temp=head;
		newn->data=no;
		newn->prev=NULL;
		newn->next=NULL;

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

template <class T>
void DoublyLL<T>::deletefirstDL()
{
	struct node<T>*temp=head;
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
	

template <class T>
void DoublyLL<T>::deletelastDL()
{
	struct node<T>*temp=head;
    if(head==NULL)
	{
		return;
	}
	else 
	{
		struct node<T>*temp=head;
		while((temp->next->next)!=NULL)
		{
			temp=temp->next;
		}
			delete (temp->next);
			temp->next=NULL;
			isize--;	
		}
    }

template <class T>
void DoublyLL<T>::deleteatpositionDL(int ipos)
{
	struct node<T>*temp=head;
	if((ipos<1)||(ipos>isize+1))
	{
		return;
	}
	else if(ipos==1)
	{
		deletefirstDL();
	}
	else if(ipos==isize)
	{
		deletelastDL();
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



template <class T>
int DoublyLL<T>::countDL()
{
	return isize;
	return 0;
}


template <class T>
void DoublyLL<T>::displayDL()
{
	struct node<T>*temp=head;
	int i=0;
	for(i=1;i<=isize;i++)
	{
		cout<<"elements of DOUBLY LINEAR LINKED LIST are\n";
		cout<<temp->data<<"\t";
		temp=temp->next;
	}
	cout<<"\n";
}

template <class T>
DoublyLL<T>::DoublyLL()
{
	head=NULL;
	isize=0;
}
///////////////////////////////////////////////////////////////////////

template<class T>
class DoublyCL
{
	private:
	struct node<T>* head;
	struct node<T>* tail;
	int isize;
	
	public:
	DoublyCL();
	void displayDC();
	int countDC();
	void insertfirstDC(T);
	void insertlastDC(T);
	void insertatpositionDC(T,int ipos);
	void deletefirstDC();
	void deletelastDC();
	void deleteatpositionDC(int ipos);
	
	
};
template <class T>
void DoublyCL<T>::insertfirstDC(T no)
{
	struct node<T>*newn=new struct node<T>;
	newn->data=no;
	newn->next=NULL;
	
	if(head==NULL)     
	{
		head=newn;
		isize++;
	}
	else              
	{
		newn->next=head;
		(head)->prev=newn;  //+
		head=newn;
		isize++;
	}	
}

template <class T>
void DoublyCL<T>::insertlastDC(T no)
{
	struct node<T>*newn=new struct node<T>;
	newn->next=NULL;
	newn->data=no;
	struct node<T>*temp=head;

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

template <class T>
void DoublyCL<T>::insertatpositionDC(T no,int ipos)
{
	struct node<T>*newn=new struct node<T>;
	newn->data=no;
	newn->next=NULL;
		
	struct node<T>*temp=head;
	int i=0;
	if((ipos<1)||(ipos>isize+1))
	{
		return;
	}
	if(ipos==1)
	{
		insertfirstDC(no);
	}
	else if(ipos==isize+1)
	{
		insertlastDC(no);
	}
	else
	{	
		struct node<T>*newn=new struct node<T>;
		newn->data=no;
		newn->prev=NULL;
		newn->next=NULL;
		struct node<T>*temp=head;
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

template <class T>
void DoublyCL<T>::deletefirstDC()
{
	struct node<T>*temp=head;
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
	
template <class T>
void DoublyCL<T>::deletelastDC()
{
	if(head==NULL)
	{
		return;
	}
	else 
	{
	struct node<T>*temp=head;
	while((temp->next->next)!=NULL)
	{
		temp=temp->next;
	}
	delete (temp->next);
	temp->next=NULL;
	isize--;
	}
}

template <class T>
void DoublyCL<T>::deleteatpositionDC(int ipos)
{
    struct node<T>*temp=head;
	if((ipos<1)||(ipos>isize+1))
	{
		return;
	}
	else if(ipos==1)
	{
	deletefirstDC();		
	}
	else if(ipos==isize)
	{
		deletelastDC();
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



template <class T>
int DoublyCL<T>::countDC()
{
	return isize;
	return 0;
}


template <class T>
void DoublyCL<T>::displayDC()
{
	struct node<T>*temp=head;
	int i=0;
	for(i=1;i<=isize;i++)
	{
		cout<<"elements of DOUBLY CIRCULAR LINKED LIST are\n";
		cout<<temp->data<<"\t";
		temp=temp->next;
	}
	cout<<"\n";
}

template <class T>
DoublyCL<T>::DoublyCL()
{
	head=NULL;
	tail=NULL;
	isize=0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////
//     STACK OPERATIONS
////////////////////////////////////////////////////////////////////////////////////////////////////


template <class T>
class stack
{
	private:
	struct node<T>*head=NULL;
	int isize;
	
	public:
	  stack();
	 ~stack(); //destructor
	void push(T);     // void insertfirst(int)
	int pop();          //void deletefirst();
	void display();
	int count();
};
template <class T>
stack<T>::stack()//constructor
{
	//cout<<"inside constructor\n";
	head=NULL;       //head=NULL;
	isize=0;
}
template <class T>
stack<T>::~stack()// destructor
{
	//cout<<"inside distructor\n";
	struct node<T>* temp=NULL;
	while(head!=NULL)
	{
		temp=head;
		head=head->next;
		delete temp;
	}
}

template <class T>
void stack<T>::push(T ino)    //insertfirst
{
	
	struct node<T>*newn=new struct node<T>;
	newn->data=ino;
	newn->next=NULL;
	
	if(head==NULL)
	{
		head=newn;
		isize++;
			
	}
	else
	{
		newn->next=head;
		head=newn;
		isize++;
	}
	
	
}
template <class T>
int stack<T>::pop()           //deletefirst
{
	int iret=-1;
	if(isize==0)
	{
		cout<<"stack is empty\n";
		//return iret;
	}
	else
	{
		struct node<T>* temp=head;
		head=head->next;
		iret=temp->data;
		//return iret;
		delete temp;
		isize--;
		
	}
	
	return iret;
}

template <class T>
void stack<T>::display()
{
	struct node<T>* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"\t";
		temp=temp->next;
	}
	cout<<"\n";
	
	
}

template <class T>
int stack<T>::count()
{
	return isize;  //return isize;
	return 0;
}




/////////////////////////////////////////////////////////////////////////////////////////////////////
////    QUEUE OPERATIONS
/////////////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
class queue
{
	private:
	 struct node<T>*head;
	int isize;
	
	public:
	queue();
	~queue();
	void enqueue(T);
	int dequeue();
	void display();
	int count();
	
};
template <class T>
queue<T>::queue()//constructor
{
	//cout<<"inside constructor\n";
	head=NULL;       //head=NULL;
	isize=0;
}
template <class T>
queue<T>::~queue()// destructor
{
	//cout<<"inside distructor\n";
	struct node<T>* temp=NULL;
	while(head!=NULL)
	{
		temp=head;
		head=head->next;
		delete temp;
	}
}
template <class T>
void queue<T>::enqueue(T ino)  //insert last
{
	
	struct node<T>* newn= new struct node<T>;
	newn->data=ino;
	newn->next=NULL;
	
	if(head==NULL)
	{
		head=newn;
	}
	else
	{
		struct node<T>* temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newn;
		
	}
	isize++;
}
template <class T>
int queue<T>::dequeue()//delete first
{
		
	int iret=-1;
	if(isize==0)
	{
		cout<<"queue is empty\n";
		//return iret;
	}
	else
	{
		struct node<T>* temp=head;
		
		head=head->next;
		iret=temp->data;
		//return iret;
		delete temp;
		isize--;
		
	}
	
	return iret;
		
}
template <class T>
void queue<T>::display()
{
	struct node<T>* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"\t";
		temp=temp->next;
	}
	cout<<"\n";
}
template <class T>
int queue<T>::count()
{
	return isize;  //return isize;
	return 0;
}


int main()
{		
	singlyLL<int>obj1;
	singlyCL<int>obj2;
	DoublyLL<int>obj3;
	DoublyCL<int>obj4;
	queue<int>obj5;
	stack<int>obj6;
	int	ichoice=1,iret=0,ivalue=0,ipos=0,ino=0;
	while(ichoice!=0)
	{
		printf("enter the choice\n");
	cout<<"---------------------------------------\n";
	cout<<"  SINGLY LINEAR LINKED LIST\n";
	cout<<"---------------------------------------\n";
	cout<<"1:insert first\n";
	cout<<"2:insert last\n";
	cout<<"3:insert at position\n";
	cout<<"4:delete first\n";
	cout<<"5:delete last\n";
	cout<<"6:delete at position\n";
	cout<<"7:display the nodes\n";
	cout<<"8:count the nodes\n";
	cout<<"9:sum of all the node\n";
	cout<<"10:search first occurence\n";
	cout<<"101:search last occurence\n";
	
	cout<<"---------------------------------------\n";
	cout<<"  SINGLY CIRCULAR LINKED LIST\n";
	cout<<"---------------------------------------\n";
	cout<<"11:insert first\n";
	cout<<"12:insert last\n";
	cout<<"13:insert at position\n";
	cout<<"14:delete first\n";
	cout<<"15:delete last\n";
	cout<<"16:delete at position\n";
	cout<<"17:display the nodes\n";
	cout<<"18:count the nodes\n";
	cout<<"---------------------------------------\n";
	cout<<"  DOUBLY LINEAR LINKED LIST\n";
	cout<<"---------------------------------------\n";
	
	cout<<"21:insert first\n";
	cout<<"22:insert last\n";
	cout<<"23:insert at position\n";
	cout<<"24:delete first\n";
	cout<<"25:delete last\n";
	cout<<"26:delete at position\n";
	cout<<"27:display the nodes\n";
	cout<<"28:count the nodes\n";
	cout<<"---------------------------------------\n";
	cout<<"  DOUBLY CIRCULAR LINKED LIST\n";
	cout<<"---------------------------------------\n";
	
	cout<<"31:Insert First\n";
	cout<<"32:Insert Last\n";
	cout<<"33:Insert at position\n";
	cout<<"34:Delete First\n";
	cout<<"35:Delete Last\n";
	cout<<"36:Delete At Position\n";
	cout<<"37:Display the elements\n";
	cout<<"38:count number of node\n";
	
	
	cout<<"---------------------------------------\n";
	cout<<"     QUEUE \n";
	cout<<"---------------------------------------\n";
	cout<<"41:insert queue elements\n";
	cout<<"42:delete queue elements\n";
	cout<<"43:display queue elements\n";
	cout<<"44:count number of elements\n";
	
	
	cout<<"---------------------------------------\n";
	cout<<"     STACK \n";
	cout<<"---------------------------------------\n";
	cout<<"51:insert stack elements\n";
	cout<<"52:delete stack elements\n";
	cout<<"53:display stack elements\n";
	cout<<"54:count number of elements\n";
	cout<<"0:exit the application\n";
	
	cout<<"---------------------------------------\n";
	
	cin>>ichoice;
	
	
	switch(ichoice)
	{
		case 1:
		cout<<"enter the value\n";
		cin>>ivalue;
		obj1.insertfirstSL(ivalue);
		break;
		
		case 2:
		cout<<"enter the value\n";
		cin>>ivalue;
		obj1.insertlastSL(ivalue);
		break;
		
		case 3:
		cout<<"enter the value\n";
		cin>>ivalue;
		cout<<"enter the position\n";
		cin>>ipos;
		obj1.insertatpositionSL(ivalue,ipos);
		break;
		
		case 4:
		obj1.deletefirstSL();
		break;
		
		case 5:
		obj1.deletelastSL();
		break;
		
		case 6:
		cout<<"enter the position\n";
		cin>>ipos;
		obj1.deleteatpositionSL(ipos);
		break;
		
		case 7:
		obj1.displaySL();
		break;
		
		case 8:
		iret=obj1.countSL();
		cout<<"number of nodes in SINGLY LINEAR LINKED LIST are:"<<iret<<"\n";
		break;
		
		case 9:
		iret=obj1.summation();
		cout<<"sum is:"<<iret<<"\n";
		break;
		
		case 10:
		cout<<"enter the number that you want to search\n";
		cin>>ivalue;
		iret=obj1.searchfirstoccurence(ivalue);
		cout<<"the first occurece position is:"<<iret<<"\n";
		break;
		
		case 101:
		cout<<"enter the number that you want to search\n";
		cin>>ivalue;
		iret=obj1.searchlastoccurence(ivalue);
		cout<<"the last occurece position is:"<<iret<<"\n";
		break;
		
		
		case 11:
		cout<<"enter the value\n";
		cin>>ivalue;
		obj2.insertfirstSC(ivalue);
		break;
		
		case 12:
		cout<<"enter the value\n";
		cin>>ivalue;
		obj2.insertlastSC(ivalue);
		break;
		
		case 13:
		cout<<"enter the value\n";
		cin>>ivalue;
		cout<<"enter the position\n";
		cin>>ipos;
		obj2.insertatpositionSC(ivalue,ipos);
		break;
		
		case 14:
		obj2.deletefirstSC();
		break;
		
		case 15:
		obj2.deletelastSC();
		break;
		
		case 16:
		cout<<"enter the position\n";
		cin>>ipos;
		obj2.deleteatpositionSC(ipos);
		break;
		
		case 17:
		obj2.displaySC();
		break;
		
		case 18:
		iret=obj2.countSC();
		cout<<"number of nodes in SINGLY CIRCULAR LINKED LIST are:"<<iret<<"\n";
		break;
		
		
		case 21:
		cout<<"enter the value\n";
		cin>>ivalue;
		obj3.insertfirstDL(ivalue);
		break;

		case 22:
		cout<<"enter the value\n";
		cin>>ivalue;
		obj3.insertlastDL(ivalue);
		break;
		
		case 23:
		cout<<"enter the value\n";
		cin>>ivalue;
		cout<<"enter the position\n";
		cin>>ipos;
		obj3.insertatpositionDL(ivalue,ipos);
		break;
		
		case 24:
		obj3.deletefirstDL();
		break;
		
		case 25:
		obj3.deletelastDL();
		break;
		
		case 26:
		cout<<"enter the position\n";
		cin>>ipos;
		obj3.deleteatpositionDL(ipos);
		break;
		
		case 27:
		obj3.displayDL();
		break;
		
		case 28:
		iret=obj3.countDL();
		cout<<"number of nodes in DOUBLY CIRCULAR LINKED LIST are:"<<iret<<"\n";
		break;
		
		
		case 31:
		cout<<"enter number\n";
		cin>>ino;
		obj4.insertfirstDC(ino);
		break;
		
		case 32:
		cout<<"enter number\n";
		cin>>ino;
		obj4.insertlastDC(ino);
		break;
					
		case 33:
		cout<<"enter number\n";
		cin>>ino;
		cout<<"enter position\n";
		cin>>ipos;
		obj4.insertatpositionDC(ino,ipos);
		break;
			
		case 34:
		obj4.deletefirstDC();
		break;
			
		case 35:
		obj4.deletelastDC();
		break;
			
		case 36:
		cout<<"enter position\n";
		cin>>ipos;
		obj4.deleteatpositionDC(ipos);
		break;
			
		case 37:
		cout<<"elements of the LL are\n";
		obj4.displayDC();
		break;
			
		case 38:
		iret=obj4.countDC();
		cout<<"number of nodes are:"<<iret<<"\n";
		break;
		
		case 41:
		cout<<"enter the elements of queue\n";
		cin>>ino;
		obj5.enqueue(ino);
		break;
		
		case 42:
			iret=obj5.dequeue();
			cout<<"dequeued element is :"<<iret<<"\n";
			break;
		
		case 43:
		cout<<"elements of the queue are\n";
		obj5.display();
		break;
		
		case 44:
		iret=obj5.count();
		cout<<"number of nodes are:"<<iret<<"\n";
		break;
	
	    case 51:
		cout<<"enter the elements of stack\n";
		cin>>ino;
		obj6.push(ino);
		break;
		
		case 52:
			iret=obj6.pop();
			cout<<"popped element is :"<<iret<<"\n";
			break;
		
		case 53:
		cout<<"elements of the queue are\n";
		obj6.display();
		break;
		
		case 54:
		iret=obj6.count();
		cout<<"number of nodes are:"<<iret<<"\n";
		break;
		
		case 0:
		cout<<"thank you for using application\n";
		break;
		
		default:
		cout<<"please enter proper option\n";
		break;
		
	}
}

	return 0;
}