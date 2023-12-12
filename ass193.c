/* write a program which display product of all digits of all element from singly linked list
(dont consider 0)
input linked list :|11|->|20|->|32|->|41|
output            :1 2 3 4 */
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

int product(PNODE head)
{
	int mult=1;
	int i=0;
	int a=0;
	while(head!=NULL)
	{
		while((head->data)>0)
		{
			a=(head->data)%10;
			if(a==0)
			{
				a=1;
			}
		    mult=mult*a;
			
			(head->data)=(head->data)/10;
			a=0;
		}
		
		printf("%d\t",mult);
		mult=1;
		
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
	

	product(first);

	
	return 0;
}