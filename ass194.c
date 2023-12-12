// write a program which display largest digits of all element from singly linear linked list
//input linked list : |11|->|250|->|32|->|41|
//output            : 1 5 3 4
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

int largest(PNODE head)
{
	int mult=1;
	int i=0;
	int a=0;
	int b=0;
	while(head!=NULL)
	{
		while((head->data)>0)
		{
			a=head->data%10;
			if(a>b)
			{
				b=a;
				if(b==9)
				{break;}
			}
			
			(head->data)=(head->data)/10;
		}
		printf("%d\t",b);
	
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
	largest(first);
	
	return 0;
}