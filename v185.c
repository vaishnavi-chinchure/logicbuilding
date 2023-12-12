/* write a program which return smallest element from singly linear linked list.
Input linked list:|110|->|230|->|20|->|320|->|240|
output:20  */
#include<stdio.h>
#include<stdlib.h>
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

void display(PNODE head)
{
	while(head!=NULL)
	{
		printf("|%d|->",head->data);
		head=head->next;
	}
}
int smallest(PNODE head)
{
	int small=0;
	small=head->data;
	while(head!=NULL)
	{
		if(head->data<small)
		{
			small=head->data;
		}
		head=head->next;
	}
	return small;
}
int main()
{
	int ret=0;
	PNODE first=NULL;
	insertfirst(&first,10);
	insertfirst(&first,20);
	insertfirst(&first,30);
	insertfirst(&first,5);
	display(first);
	ret=smallest(first);
	printf("\n");
	printf("%d",ret);
	return 0;
	
}