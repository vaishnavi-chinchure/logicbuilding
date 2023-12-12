
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
	int i=0;
	int mult=1;
	 int a;
	//printf("%d",a);
	while(head!=NULL)
	{
		for(i=1;i<=head->data/2;i++)
		{
			//printf("%d\t",i);
			sum=sum+i;
		}
	
		//head=head->next;
		//printf("sum is %d",sum);
		if(sum==head->data)
		{
			printf("%d  is perfect number",head->data);
		}
		
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
	insertfirst(&first,6);
	insertfirst(&first,20);
	insertfirst(&first,30);
	insertfirst(&first,40);
	insertfirst(&first,50);
	insertfirst(&first,30);
	insertfirst(&first,60);
	
	
	
	
	display(first);
	sum(first);
	//printf("largest element is %d\n",ret);
	
	return 0;
}
