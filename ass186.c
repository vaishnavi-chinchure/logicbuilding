/* write a program which displays all elements which are perfect from singly leniar linked list.
input linked list :|11|->|28|->|17|->|41|->|6|->|89|
output: 6 28 */
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

int perfect(PNODE head)
{
	int i=1;
	int sum=0;
	int mult=1;
	int a=head->data;
	printf("%d\t",a);
	while(head!=NULL)
	{
	for(i=1;i<=(head->data)/2;i++)
	{
		printf("%d\t",i);
		if((head->data)%i==0);
		{
			sum=i;
			sum=sum+i;
			mult=mult*i;
		}
	}
	printf("%d\n",sum);
head=head->next;
	}
	if(sum==(head->data))
	{
		return sum;
	}
	//head=head->next;
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
	insertfirst(&first,6);
	insertfirst(&first,30);
	insertfirst(&first,40);
	insertfirst(&first,50);
	insertfirst(&first,30);
	insertfirst(&first,90);
	
	
	
	
	display(first);
	ret=perfect(first);
	printf("largest element is %d\n",ret);
	
	return 0;
}