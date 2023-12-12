#include<stdio.h>
#include<stdlib.h>


struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;


int count(PNODE head,PNODE tail)
{
	int count=0;
	do{
		count++;
		head=head->next;
		
	}while(head!=tail->next);
	return count;
}




void insertfirst(PPNODE head,PPNODE tail,int ivalue)
{
	
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	newn->data=ivalue;
	newn->next=NULL;
	newn->prev=NULL;
	
	if(*head==NULL&&*tail==NULL)
	{
		*head=newn;
		*tail=newn;
		(*tail)->next=*head;
		(*head)->prev=*tail;
	}
	else
	{
	
		newn->next=(*head);
		(*head)->prev=newn;
			*head=newn;
		(*tail)->next=*head;
		(*head)->prev=*tail;
	}
}

void insertlast(PPNODE head,PPNODE tail,int ivalue)
{
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	newn->data=ivalue;
	newn->next=NULL;
	newn->prev=NULL;
	
	if((*head==NULL)&&(*tail==NULL))
	{
		*head=newn;
		*tail=newn;
		(*head)->prev=*tail;
		(*tail)->next=*head;
	}
	else
	{
		(*tail)->next=newn;
		newn->prev=*tail;
		(*tail)=newn;
		(*head)->prev=*tail;
		(*tail)->next=*head;
	}
}


void insertatposition(PPNODE head,PPNODE tail,int ivalue,int ipos)
{
	int isize=0,i;
	
	PNODE temp=NULL,newn=NULL;
	
	if((*head==NULL)||(*tail==NULL)||ipos>(count(*head,*tail))+1)
	{
		return;
	}
	if(ipos==1)
	{
		return(insertfirst(head,tail,ivalue));
	}
	else if(ipos==count(*head,*tail)+1)
	{
		return(insertlast(head,tail,ivalue));
	}
	else
	{
		temp=*head;
		newn=(PNODE)malloc(sizeof(NODE));
		newn->next=NULL;
		newn->prev=NULL;
		newn->data=ivalue;
		for(i=1;i<ipos-1;i++)
		{
			temp=temp->next;
		}
		newn->next=temp->next;
		temp->next->prev=newn;
		temp->next=newn;
		newn->prev=temp;
	}	
}

void deletefirst(PPNODE head,PPNODE tail)
{
	PNODE *temp=head;
	if(*head==NULL)
	{
		return;
	}
	else if(*head==*tail)
	{
		free(*head);
		*head=*tail=NULL;
	}
	else
	{
		*head=(*head)->next;
		(*tail)->next=*head;
		(*head)->prev=*tail;
		free(temp);
	}
}
void deletelast(PPNODE head,PPNODE tail)
{
	PNODE temp=*tail;
	if((*head==NULL)&&(*tail==NULL))
	{
		return;
	}
	else if(*head==*tail)
	{
		free(*head);
		*head=*tail=NULL;
	}
	else
	{
		*tail=(*tail)->prev;
		(*tail)->next=*head;
		(*head)->prev=*tail;
		free(temp);
	}
}


void display(PNODE head,PNODE tail)
{
	
	do
	{
		printf("%d\t",head->data);
		head=head->next;
	}while(head!=tail->next);
	
	printf("\n");
}
void deleteatposition(PPNODE head,PPNODE tail,int ipos)
{
	int i=0;
	PNODE temp=*head,*t=NULL;
	if(ipos>(count(*head,*tail)))
	{
		return;
	}
	else if(ipos==1)
	{
		return(deletefirst(head,tail));
	}
	else if(ipos==(count(*head,*tail)))
	{
		return(deletelast(head,tail));
	}
	else
	{
		temp=*head;
		for(i=0;i<ipos-1;i++)
		{
			*t=temp->next;
			temp=temp->next;
		}
		//t=temp->next;
		temp->next=temp->next->next;
		//free(temp->next->prev);
		temp->next->next->prev=temp;
		free(temp->next->prev);
		
	}
}

int main()
{
	PNODE first=NULL;
	PNODE last=NULL;
	int ivalue=0,ipos,iret=0;
	int ichoice=1;
	
	while(ichoice!=0)
	{
	printf("enter the choice\n");
	printf("1:insert first\n");
	printf("2:insert last\n");
	printf("3:insertatposition\n");
	printf("4:deletefirst\n");
	printf("5:deletelast\n");
	printf("6:deleteatposition\n");
	printf("7:display the nodes\n");
	printf("8:count number of nodes\n");
	printf("0:exit\n");
	scanf("%d",&ichoice);
	
	switch(ichoice)
	{
		case 1:
		printf("enter the value\n");
		scanf("%d",&ivalue);
		insertfirst(&first,&last,ivalue);
		break;
		
		case 2:
		printf("enter the value\n");
		scanf("%d",&ivalue);
		insertlast(&first,&last,ivalue);
		break;
		
		case 3:
		printf("enter the value\n");
		scanf("%d",&ivalue);
		printf("enter the position\n");
		scanf("%d",&ipos);
		insertatposition(&first,&last,ivalue,ipos);
		break;
		
		case 4:
		deletefirst(&first,&last);
		break;
		
		case 5:
		deletelast(&first,&last);
		break;
		
		case 6:
		printf("enter the position\n");
		scanf("%d",&ipos);
		deleteatposition(&first,&last,ipos);
		break;
		
		case 7:

		display(first,last);
		break;
		
		case 8:
		iret=count(first,last);
		printf("count of nodes are%d",iret);
		break;
		
		case 0:
		printf("thank you for using the application\n");
		break;
		
		default:
		printf("enter the proper input\n");
		break;
		
	}
	
	}
	
	return 0;
}