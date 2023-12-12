#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
	struct node*prev;  //+
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;


void InsertFirst(PPNODE head,int no)
{
	
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	newn->data=no;
	newn->next=NULL;
	newn->prev=NULL;  //+ 
	
	if(*head==NULL)     //LL is empty
	{
		*head=newn;
	}
	else              //LL contains at least one node
	{
			newn->next=*head;
			(*head)->prev=newn;  //+
			*head=newn;
	}
	
}


void InsertLast(PPNODE head,int no)
{
	
	PNODE newn=NULL;
	PNODE temp=*head;
	
	newn=(PNODE)malloc(sizeof(NODE));
	newn->data=no;
	newn->next=NULL;
	newn->prev=NULL;  //+ 
	
	if(*head==NULL)     //LL is empty
	{
		*head=newn;
	}
	else              //LL contains at least one node
	{
			
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newn;
		newn->prev=temp;	
	}
	
}

void display(PNODE head)
{
	while(head!=NULL)
	{
		printf("|%d|<=>",head->data);
		head=head->next;
	}
	printf("NULL\n");
	
}

int count(PNODE head)
{
	int icnt=0;
	while(head!=NULL)
	{
		icnt++;
		head=head->next;
	}
return icnt;
}


void DeleteFirst(PPNODE head)
{
	if((*head)==NULL)               //empty LL
	{
		return;
	}
	else if((*head)->next==NULL)    //single node
	{
		free(*head);
		(*head)=NULL;
	}
	else                           //more than one node
	{
		(*head)=(*head)->next;
		free((*head)->prev);   //+
		(*head)->prev=NULL;    //+
	}
}

void DeleteLast(PPNODE head)
{
	PNODE temp=*head;
	if((*head)==NULL)               //empty LL
	{
		return;
	}
	else if((*head)->next==NULL)    //single node
	{
		free(*head);
		(*head)=NULL;
	}
	else                           //more than one node
	{
		while(temp->next->next!=NULL)
		{
			temp=temp->next;
		}
		free(temp->next);
		temp->next=NULL;
		
	}
}

void InsertAtposition(PPNODE head,int no,int ipos)
{
	int isize=0,i=0;
	PNODE newn=NULL;
	PNODE temp=*head;
	
	
	
	isize=count(*head);
	
	if((ipos<1)||(ipos>isize+1))
	{
		return;
	}
	if(ipos==1)
	{
		InsertFirst(head,no);
	}
	else if(ipos==isize+1)
	{
		InsertLast(head,no);
	}
	else
	{
		newn=(PNODE)malloc(sizeof(NODE));
		newn->data=no;
		newn->next=NULL;
		newn->prev=NULL;
		
		for(i=1;i<ipos-1;i++)
		{
			temp=temp->next;
		}
		newn->next=temp->next;
		temp->next->prev=newn;      //+
		temp->next=newn;
		newn->prev=temp;            //+
		
	}
	
	
	
}

/*void deleteatposition(PPNODE head,int ipos)
{
	int isize=0,i=0;
	PNODE temp=*head;
	PNODE target=NULL;
	
	isize=count(*head);
	
	if(ipos<1||ipos>isize+1)
	{
		return;
	}
	if(ipos==1)
	{
		DeleteFirst(head);
	}
	else if(ipos==isize)
	{
		DeleteLast(head);
	}
	else
	{
		for(i=1;i<ipos-1;i++)
		{
			temp=temp->next;
		}
		target=temp->next;         // i did
		temp->next=target->next;
		target->next->prev=temp;
		free(target);
		
		
		
		    
	}
}*/

void deleteatposition(PPNODE head,int ipos)
{
	int isize=0;
	int i=0;
	PNODE temp=*head;
	isize=count(*head);
	if((ipos<1)||(ipos>isize))
	{
		return;
	}
	if(ipos==1)
	{
		DeleteFirst(head);
	}
	else if(ipos==isize)
	{
		DeleteLast(head);
	}
	else
	{
		for(i=1;i<ipos-1;i++)
		{
			temp=temp->next;
		}
		temp->next=temp->next->next;
		free(temp);
		temp->next->prev=temp;
		
	}
}


int main()
{
	PNODE First=NULL;
	int ioption=1,ivalue=0,iret=0,ipos;
	
	
	while(ioption!=0)
	{
		printf("\n*******************************************************\n");
		printf("select option\n");
		printf("1: Insert the node at first position\n");
		printf("2:  Insert node at last position\n");
		printf("3: Insert node at given position\n");
		printf("4: delete node at first position\n");
		printf("5: delete node at last position\n");
		printf("6: delete node at given position\n");
		printf("7: display the contents of linked list\n");
		printf("8:  count the nodes of linked list\n");
		printf("0: exit the application\n");
		scanf("%d",&ioption);
		printf("\n*******************************************************\n");
		switch(ioption)
		{
			
			case 1:
			printf("enter data to insert\n");
			scanf("%d",&ivalue);
			InsertFirst(&First,ivalue);
			break;
			
			
			case 2:
			printf("enter data to insert\n");
			scanf("%d",&ivalue);
			InsertLast(&First,ivalue);
			break;
			
			case 3:
			printf("enter data to insert\n");
			scanf("%d",&ivalue);
			printf("enter position\n");
			scanf("%d",&ipos);
			InsertAtposition(&First,ivalue,ipos);
			break;
			
			case 4:
			DeleteFirst(&First);
			break;
			
			case 5:
			DeleteLast(&First);
			break;
			
			case 6:
			printf("enter position\n");
			scanf("%d",&ipos);
			deleteatposition(&First,ipos);
			break;
			
			case 7:
			printf("contents of linked list are: \n");
			display(First);			
			break;
			
			case 8:
		
			iret=count(First);
			printf("number of nodes are:%d",iret);
			break;
			
			case 0:
			printf("thank you for usig marvellous application\n");
			break;
		
			default:
			printf("please enter proper option\n");
			break;
		
		}
	}
	
	return 0;
}//end of main