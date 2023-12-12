#include<iostream>
using namespace std;
typedef struct node
{
	int data;
	struct node*lchild;
	struct node*rchild;
}NODE,*PNODE,**PPNODE;


class BST
{
	private:
	PNODE head;

	public:
	
	BST()
	{
		head=NULL;	
	}
	void insertnode(PNODE head,int no);
	void inorder();
	
};

void BST::insertnode(PNODE head,int no)
{
	PNODE newn=new NODE;
	PNODE temp=head;
	newn->data=no;
	newn->lchild=NULL;
	newn->rchild=NULL;
	
	if(head==NULL)
	{
		head=newn;
		
	}
	else
	{
		while(1)
		{
			if(no>temp->data)
			{
				if(temp->rchild==NULL)
				{
					temp->rchild=newn;
					break;
				}
				temp=temp->rchild;
			}
			else if(no<temp->data)
			{
				if(temp->lchild==NULL)
				{
					temp->lchild=newn;
					break;
				}
				temp=temp->lchild;
			
			}
			else if(no==temp->data)
			{
				cout<<"duplicate node\n";
				delete(newn);
				break;
			}
			
		}
	}
	

void BST::inorder()
{
	PNODE temp=head;
	if(temp!=NULL)
	{
		inorder(temp->lchild);//L
		printf("%d\t",temp->data);//D
		inorder(temp->rchild);//R
	}
}

BST::BST()
{
	head=NULL;		
}
};

int main()
{
	BST obj;
	PNODE root=NULL;
	int ichoice=1,ino=0,iret=0,ivalue=0,ret=0,pret=0;
	while(ichoice!=0)
	{
		
		cout<<"enter your choice\n";
		cout<<"1:insert node\n";
		cout<<"2:display inorder\n";
		cout<<"3:display preorder\n";
		cout<<"4:display postorder\n";
		cout<<"5:count nodes\n";
		cout<<"6:search node\n";
		cout<<"7:countleaf nodes\n";
		cout<<"8:count parent nodes\n";
		cout<<"0:terminate the application\n";
		cin>>ichoice;
		
		switch(ichoice)
		{
			case 1:
			cout<<"enter number\n";
			cin>>ino;
			obj.insertnode(root,ino);
			break;
			
			case 2:
			obj.inorder();
			cout<<"\n";
			break;
			
			case 3:
			//obj.preorder(root);
			cout<<"\n";
			break;
			
			case 4:
			//obj.postorder(root);
			cout<<"\n";
			break;
			
			case 5:
			//iret=obj.count(root);
			cout<<"number of nodes:"<<iret<<"\n";
			break;
			
			case 6:
			cout<<"enter the value\n";
			cin>>ivalue;
			//obj.search(&root,ivalue);
			break;
			
			case 7:
			//ret=obj.countleaf(root);
			cout<<"number leaf of nodes are:%d"<<ret<<"\n";
			break;
			
			case 8:
			//pret=obj.countparent(root);
			cout<<"number of parent nodes are %d"<<pret<<"\n";
			break;
			
			case 0:
			cout<<"thank you for using appliaction\n";
			break;
			
			
			default:
			cout<<"enter the proper choice\n";
			break;
		}//end of switch

	}//end of while
	return 0;
}//end of main


