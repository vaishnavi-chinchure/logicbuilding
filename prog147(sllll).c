#include<stdio.h> 
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
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
	if(*head==NULL)
	{
		*head=newn;
	}
	else
	{
	   newn->next=*head;
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
	if(*head==NULL)
	{
		*head=newn;
	}
	else
	{  
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newn;
	}
}
void display(PNODE head)
{
	while(head!=NULL)
	{
		printf("|%d|",head->data);
		head=head->next;
	}
	printf("NULL\n");
}
int count(PNODE head)
{
	int count=0;
	while(head!=NULL)
	{
		count++;
		head=head->next;
	}
return count;
}

void DeleteFirst(PPNODE head)
{
	PNODE temp=*head;
	if(*head==NULL)
	{
		return;
	}
	else if((*head)->next==NULL)
	{
		free(*head);
		*head=NULL;
	}
	else
	{
		*head=(*head)->next;
		free(temp);
	}
}
void DeleteLast(PPNODE head)
{
	PNODE temp=*head;
	if(*head==NULL)
	{
		return ;
	}
	else if((*head)->next==NULL)
	{
		free(*head);
		*head=NULL;
	}
	else
	{
		while(temp->next->next!=NULL)
		{
			temp=temp->next;
		}
		free(temp->next);
		temp->next=NULL;
	}
}

void InsertAtPosition(PPNODE head,int no,int ipos)
{
	int isize=0,i=0;
	
	PNODE newn=NULL;
	PNODE temp=*head;
	
	isize=count(*head);
	
	if((ipos<1)||(ipos>isize+1)) //invalid position
	{
		return;
	}
	if(ipos==1)    //first position
	{
		InsertFirst(head,no);
	}
	else if(ipos==isize+1) //last position
	{
		InsertLast(head,no);
	}
	else //In between first and last and last position
	{
		newn=(PNODE)malloc(sizeof(NODE));
		newn->data=no;
		newn->next=NULL;
		
		for(i=1;i<ipos-1;i++)
		{
			temp=temp->next;
		}
		newn->next=temp->next;
		temp->next=newn;
	}
		   
}
void DeleteAtPosition(PPNODE head,int ipos)
{
	int isize=0,i=0;
	PNODE temp=*head;
	PNODE target=NULL;
	
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
		target=temp->next;
		
		temp->next=target->next;
		free(target);
	}
}

int main()
{
	
	PNODE First=NULL;
	int iret=0,ipos=0,i=0;
	int ioption=1,ivalue=0;
	while(ioption!=0)
	{
		printf("________________________________________________________\n");
		printf("enter your action on Linked list: \n");
		printf("1:Insert node at first position\n");
		printf("2:Insert node at last position\n");
		printf("3:Insert node at given position\n");
		printf("4:delete first node\n");
		printf("5:delete last node\n");
		printf("6:delete node at given position\n");
		printf("7:display all the contents of linked list\n");
		printf("8:count number of nodes of linked list\n");
		printf("0:exit the application\n");
		printf("____________________________________________________\n");
		
		scanf("%d",&ioption);
		
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
			InsertAtPosition(&First,ivalue,ipos);
			break;
			
			case 4:
			DeleteFirst(&First);
			break;
			
			case 5:
			DeleteLast(&First);
			break;
			
			case 6:
			printf("enter the position");
			scanf("%d",&ipos);
			DeleteAtPosition(&First,ipos);
			break;
			
			case 7:
			printf("nodes of linked list are : \n");
			display(First);
			break;
			
			case 8:
			iret=count(First);
			printf("number of nodes are : %d\n",iret);
			break;
			
			case 0:
			printf("thanks for using marvellous linked list application\n");
			break;
			
			default:
			printf("please enter valid option\n");
			break;
		}//end of switch
		
	}//end of while
	printf("");
	return 0;
}//end of main