/* write a program which display addition of digits of element from singly linear linked list
input linked list :|110|->|230|->|20|->|320|->|240|->|640|

output: 2 5 2 6 10  */
    
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

struct node
{
	int data;
	struct node*next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void insertfirst(PPNODE head,int no)
{
	PNODE newn=NULL;
	
	newn=(PNODE)malloc(sizeof(NODE));
	newn->next=NULL;
	newn->data=no;
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

int addition(PNODE head)
{
	int sum=0;
	int i=0;
	int a=0;
	while(head!=NULL)
	{
		while((head->data)>0)
		{
			a=head->data%10;
		    sum=sum+a;
			(head->data)=(head->data)/10;
		}
		
		printf("%d\n",sum);
		sum=0;
		head=head->next;
	}
	
}

void display(PNODE head)
{
	while(head!=NULL)
	{
		printf("|%d|->\t",head->data);
		head=head->next;
	}
	printf("\n");
}



int main()
{
	int ret=0;
	int no2=0;
	PNODE first=NULL;
	insertfirst(&first,11);
	insertfirst(&first,17);
	insertfirst(&first,30);
	insertfirst(&first,41);
	insertfirst(&first,50);
	insertfirst(&first,89);
	insertfirst(&first,70);

	display(first);
	addition(first);
	
	return 0;
}