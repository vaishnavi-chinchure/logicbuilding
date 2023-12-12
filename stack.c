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

void push(PPNODE head,int ivalue)
{
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	newn->data=ivalue;
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

int pop(PPNODE head)
{
	int iret=-1;
	if(*head==NULL)
	{
		return iret;
	}
	else
	{
		PNODE temp=*head;
		*head=temp->next;
		iret=temp->data;
		free(temp);	
	}
	printf("poped element is %d\n",iret);
}
void display(PNODE head)
{
	PNODE temp=head;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	printf("\n");
	
}
int count(PNODE head)
{
	int count=0;
	while(head!=NULL)
	{
		count++;
		head=head->next;
	}
return count;
}

int main()
{
	PNODE first=NULL;
	int ichoice=1,iret;
	int ivalue;
	while(ichoice!=0)
	{
	printf("enter the choice\n");
	printf("1:push the element\n");
	printf("2:pop the element\n");
	printf("3:display the element\n");
	printf("4: count the element\n");
	printf("0:exit the application\n");
	scanf("%d",&ichoice);
	switch(ichoice)
	{
		case 1:
		printf("enter the element\n");
		scanf("%d",&ivalue);
		push(&first,ivalue);
		break;
		
		case 2:
		iret=pop(&first);
		break;
		
		case 3:
		display(first);
		break;
		
		case 4:
		iret=count(first);
		printf("count is %d\n",iret);
		break;
		
		case 0:
		printf("thank you");
		break;
		
		default:
		printf("enter the proper element\n");
		break;
	}
}return 0;
}