/*write a program which returns addition of all element from singly linear linked list

input linked list :|10|->|20|->|30|->|40|

output       :100  */



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

int sum(PNODE head)
{
	int sum=0;
	while(head!=NULL)
	{   
	
	sum=sum+head->data;	
		head=head->next;
		//printf("count is %d\n",count);

	}
	return sum;
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
	insertfirst(&first,10);
	insertfirst(&first,20);
	insertfirst(&first,30);
	insertfirst(&first,40);
	insertfirst(&first,50);
	insertfirst(&first,30);
	insertfirst(&first,70);
	
	display(first);
	ret=sum(first);
	printf("sum is... %d",ret);
	
	return 0;
}