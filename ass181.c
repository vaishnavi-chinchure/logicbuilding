/*write a program which search first occurence of a particular elementfrom 
singly linear linked list.
function should return position at which element is found
input linked list :|10|->|20|->|30|->|40|->|50|->|30|->|70|
input element:30
output       :3  */
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

int searchfirstocc(PNODE head,int no2)
{
	int count=0;
	while(head!=NULL)
	{
		count++;
	if(head->data==no2)
	{
		
		break;	
	}
	head=head->next;
	}
	return count;
	
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
	insertfirst(&first,60);
	insertfirst(&first,70);
	
	
	printf("enter the element\n");
	scanf("%d",&no2);
	
	display(first);
	ret=searchfirstocc(first,no2);
	printf("first occurence of element is %d\n",ret);
	
	return 0;
}