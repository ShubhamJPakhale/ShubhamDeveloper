//DOUBLY LINK LIST-> TWO DIRECTIONAL MOTION IS POSSIBLE IN DOUBLY
// ONLY WE HAVE TO ADD *prev POINTER IN SINGLY LINKED LIST PROGRAM
// ALWAYS USE ONE POINTER LESS THAN SINGLY IN DOUBLY AND USE DOUBLE DIRECTION ADDRESS IN DOUBLYLINKEDLIST..

#include<stdio.h>
#include<stdlib.h>

typedef struct Node  NODE;
typedef struct Node *PNODE;
typedef struct Node **PPNODE;

struct Node
{
	int data;
	struct Node * next;
	struct Node *prev;
};

void InsertFirst(PPNODE Head,int value)
{
	PNODE newn=NULL;
	
	newn=(PNODE)malloc(sizeof(NODE));
	newn->data=value;
	newn->next=NULL;
	newn->prev=NULL;
	
	if(*Head ==NULL)
	{
		*Head=newn;
	}
	else
	{
		newn->next=*Head;
		(*Head)->prev=newn;
		(*Head)=newn;
	}
}

void InsertLast(PPNODE Head,int value)
{
	PNODE newn=NULL;
	
	newn=(PNODE)malloc(sizeof(NODE));
	newn->data=value;
	newn->next=NULL;
	newn->prev=NULL;
	
	if(*Head==NULL)
	{
		*Head=newn;
	}
	else
	{
		PNODE temp= *Head;
		
		while(temp->next !=NULL)
		{
			temp=temp->next;
		}
		temp->next=newn;
		newn->prev=temp;
	}
}

int Count(PNODE Head)
{
	int icnt=0;
	while(Head != NULL)
	{
		icnt++;
		Head=Head->next;
	}
	return icnt;
}

void InsertAtPos(PPNODE Head,int value,int pos)
{
	PNODE temp=*Head;
	int size=0;
	
	size=Count(*Head);
	
	if(pos < 1 || pos >size+1)
	{
		return;
	}
	else if(pos == 1)
	{
		InsertFirst(Head,value);
	}
	else if(pos == size)
	{
		InsertLast(Head,value);
	}
	else
	{
		PNODE newn=NULL;
		
		newn=(PNODE)malloc(sizeof(NODE));
	    newn->data=value;
	    newn->next=NULL;
	    newn->prev=NULL;
		
		int i=0;
		for(i=1;i<pos-1;i++)
		{
			temp=temp->next;
		}
		newn->next=temp->next;
		temp->next=newn;
		newn->prev=temp;
	}
}

void Display(PNODE Head)
{
	while(Head != NULL)
	{
		printf("|%d|<=>",Head->data);
		Head=Head->next;
	}
	printf("NULL\n");
}

void DisplayX(PNODE Head)  // reverse linked list logic
{
	if(Head ==NULL)
	{
		return ;
	}
	
	while(Head->next != NULL)
	{
		Head=Head->next;
	}
	
	while(Head != NULL)
	{
		printf("|%d|<=>",Head->data);
		Head=Head->prev;
	}
	printf("NULL\n");
}

void DeleteFirst(PPNODE Head)
{
	if(*Head == NULL)
	{
		return;
	}
	else if((*Head )->next ==NULL)
	{
		free(*Head);
		*Head=NULL;
	}
	else
	{
		*Head=(*Head )->next;
		free((*Head )->prev);
		(*Head) ->prev=NULL;
	}
}

void DeleteLast(PPNODE Head)
{
	PNODE temp=*Head;
	
	if(*Head == NULL)
	{
		return;
	}
	else if((*Head )->next ==NULL)
	{
		free(*Head);
		*Head=NULL;
	}
	else
	{
		while(temp->next->next !=NULL)
		{
			temp=temp->next;
		}
		temp->next=NULL;
		free(temp->next);
		temp->prev=temp;
	}
}

void DeleteAtPos(PPNODE Head,int pos)
{
	PNODE temp=*Head;
	int size=0;
	size=Count(*Head);
	
	if(pos < 1 || pos >size+1)
	{
		return;
	}
	else if(pos == 1)
	{
		DeleteFirst(Head);
	}
	else if(pos == size)
	{
		DeleteLast(Head);
	}
	else
	{	
		int i=0;
		for(i=1;i<pos-1;i++)
		{
			temp=temp->next;
		}
		temp->next=temp->next->next;
		free(temp->next->prev);
		temp->next->prev=temp;
	}
	
}

int main()
{
	PNODE First=NULL;
	int no=0,iret=0,pos=0;
	
	printf("enter number: ");
	scanf("%d",&no);
	InsertFirst(&First,no);
	
	printf("enter number: ");
	scanf("%d",&no);
	InsertFirst(&First,no);
	
	printf("enter number: ");
	scanf("%d",&no);
	InsertFirst(&First,no);
	
	Display(First);
	DisplayX(First);
	
	printf("enter last number: ");
	scanf("%d",&no);
	InsertLast(&First,no);
	
	printf("enter last number: ");
	scanf("%d",&no);
	InsertLast(&First,no);
	
	Display(First);
	
	iret=Count(First);
	printf("\nNumber of member in list are %d\n",iret);
	
	printf("enter number: ");
	scanf("%d",&no);
	printf("enter Position number: ");
	scanf("%d",&pos);
	
	InsertAtPos(&First,no,pos);
	
	Display(First);
	
	iret=Count(First);
	printf("\nNumber of member in list are %d\n",iret);
	
	DeleteFirst(&First);
	Display(First);
	
	DeleteLast(&First);
	Display(First);
	
	printf("enter Position number for delete: ");
	scanf("%d",&pos);
	DeleteAtPos(&First,pos);
	
	Display(First);
	
	return 0;
}
