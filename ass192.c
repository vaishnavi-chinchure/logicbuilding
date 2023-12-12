/* write  a program which display all palindrome elements of singly linked list
input linked list : |11|->|28|->|17|->|41|->|6|->|89|
output            : 11  6  414  */
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

int palindrome(PNODE head)
{
	int rev=0;
	int b=0;
	int a=0;
	while(head!=NULL)
	{
		b=head->data;
		while((head->data)>0)
		{
			
			a=head->data%10;
			//printf("%d",a);    
			
			rev=(rev*10)+a;
			
		(head->data)=(head->data)/10;
		}
		
		if(rev==b)
		{
			printf("%d is paliondrome\n",rev);
		}
		else
		{
			printf("%d is not a paliandrome\n",rev);
		}
	
		rev=0;
		b=0;	
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
	insertfirst(&first,30);
	insertfirst(&first,28);
	insertfirst(&first,17);
	insertfirst(&first,8);
	insertfirst(&first,6);
	insertfirst(&first,89);
	insertfirst(&first,121);

	display(first);
	palindrom(first);
	//printf("%d",ret);
	return 0;
}