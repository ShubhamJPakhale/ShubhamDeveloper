#include<stdio.h>

struct Node
{
	int data;
	struct Node *lchild;
	struct Node *rchild;
}NODE,*PNODE,**PPNODE;

void Insert(PPNODE ROOT,int value)
{
	PNODE temp=*ROOT;
	PNODE newn=(PNODE)malloc(sizeof(NODE));
	
	newn->data=value;
	newn->lchild=NULL;
	newn->rchild=NULL;
	
	if(*ROOT==NULL)
	{
		*ROOT=newn;
	}
	else
	{
		while(1)
		{
			if(temp->data==value)
			{
				printf("Enter number is already exist\n");
				free(newn);
				break;
			}
			
			if(value <(temp->data))
			{
				if((temp->child)==NULL)
				{
					temp->child=newn;
					break;
				}
				temp=temp->lchild;
			}
			else if(value>(temp->data))
			{
				if((temp->rchild)==NULL)
				{
					temp->rchild=newn;
					break;
				}
				temp=temp->rchild;
			}
		}
	}
}
			
int main()
{
	int choice=1,no=0;
	PNODE First=NULL;
	
	printf("Enter number :");
	scanf("%d",&no);
	
	Insert(&First,no);
	
	return 0;
}