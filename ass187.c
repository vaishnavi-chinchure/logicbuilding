/* write program which displays all elements which are prime from singly linear linked list
Input linked list :|11|->|20|->|17|->|41|->|22|->|89|
ouput: 11 17 41 89  */
 
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

int prime(PNODE head)
{
	int sum=0;
	int i=0;
	
	while(head!=NULL)
	{
		for(i=2;i<(head->data)/2;i++)
		{
			if((head->data)%i==0)
			{
				break;
			}
			else
			{
				printf(" prime numbers are %d\n",head->data);
				break;
			}		
		}
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
	prime(first);
	
	return 0;
}