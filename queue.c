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

void enqueue(PPNODE head,int ino)
{
	PNODE temp=NULL;
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	newn->next=NULL;
	newn->data=ino;
	if(*head==NULL)
	{
		*head=newn;
	}
	else
	{
		while(temp!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newn;
		
	}
}
int dequeue(PPNODE head)
{
	int iret=-1;
	if(*head==NULL)
	{
		return -1;
	}
	else
	{
		*head=(*head)->next;
		iret=(*head)->data;
		free(*head);
	}
	return iret;
	
	
	/*PNODE temp=*head;
	if(*head==NULL)
	{
		return;
	}
	else if((*head)->next==NULL)
	{
		free(*head);
		*head=NULL;
	}
	else
	{
		*head=(*head)->next;
		free(temp);
	}*/
	
}

void display(PNODE head)
{
	PNODE temp=head;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	
}
int count(PNODE head)
{
	int icnt;
	while(head!=NULL)
	{
		icnt++;
		head=head->next;
	}
	return icnt;
}

int main()
{
	PNODE first=NULL;
	int ichoice=1,iret,ivalue;
	while(ichoice!=0)
	{
		printf("enter the choice\n");
		printf("1:enqueue the element\n");
		printf("2:dequeue the element\n");
		printf("3:display the element\n");
		printf("4: count the element\n");
		printf("0:exit the application\n");
		scanf("%d",&ichoice);
		switch(ichoice)
		{
			case 1:
			printf("enter the value\n");
			scanf("%d",&ichoice);
			enqueue(&first,ivalue);
			break;
			
			
			case 2:
			iret=dequeue(&first);
			printf("dequeued element is %d",iret);
			break;
			
			case 3:
			display(first);
			break;
			
			case 4:
			count(first);
			break;
			
			case 0:
			printf("thank you");
			break;
			
			default:
			printf("enter the proper choice\n");
			break;
			
			
		}
	}return 0;
}