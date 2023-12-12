/* write a program which returns second maximum element from singly linear linked list
input linked list : |110|->|230|->|320|->|240|
output : 240  */
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

int maximum(PNODE head)
{
	int sum=0;
	int b=0;
	int a=head->data;
	while(head!=NULL)
	{
		if((head->data)>a)
		{
			 a=head->data;
			 b=a;
		}
	
		if((head->data)>b&&(head->data)<a)
		{
			b=head->data;
		}
		
		head=head->next;
		

	}
		
	
	return b;
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
	insertfirst(&first,80);
	insertfirst(&first,20);
	insertfirst(&first,30);
	insertfirst(&first,40);
	insertfirst(&first,50);
	insertfirst(&first,30);
	insertfirst(&first,90);
	
	
	
	
	display(first);
	ret=maximum(first);
	printf("largest element is %d\n",ret);
	
	return 0;
}