#include<stdio.h>
#include<stdlib.h>

typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;

struct Node
{
	int Data;
	struct node *next;
};

void InsertFirst(PPNODE Head,int No)
{
	PNODE newn=NULL;
	
	newn=(PNODE)malloc(sizeof(NODE));
	newn->Data=No;
	newn->next=NULL;
	
	if(*Head == NULL)
	{
		*Head=newn;
	}
	else
	{
		newn->next= *Head;
		*Head=newn;
	}
}

void InsertLast(PPNODE Head,int No)
{
	PNODE newn=NULL;
	PNODE temp=NULL;
	
	newn=(PNODE)malloc(sizeof(NODE));
	newn->Data=No;
	newn->next=NULL;
	
	if(*Head == NULL)
	{
		*Head=newn;
	}
	else
	{
		temp= *Head;
		
		while(temp->next != NULL)
		{
			temp=temp->next;
		}
		temp->next = newn;
	}
}

int Count(PNODE Head)
{
	int icnt=0;
	while(Head != NULL)
	{
		icnt++;
		Head= Head->next;
	}
	return icnt;
}

void InsertAtPos(PPNODE Head,int iNo,int Pos)
{
	int size=0;
	PNODE temp=*Head;
	PNODE newn=NULL;
	
	size=count(*Head);

	if((Pos<1 )||( Pos>size + 1))
	{
		return;
	}
	else if(Pos ==1)
	{
		InsertFirst(Head,iNo);
	}
	else if(Pos== size+1)
	{
		InsertLast(Head,iNo);
	}
	else
	{
		newn=(PNODE)malloc(sizeof(NODE));
		newn->Data=iNo;
		
		for(int i=0;i<Pos-1;i++)
		{
			temp=temp->next;
		}
		newn->next= temp->next;
		temp->next=newn;
	}
}

void DeleteFirst(PPNODE Head)
{
	PNODE temp= *Head;
	
	if(*Head !=NULL)
	{
		*Head= (*Head)->next;
		free(temp);
	}
}

void DeleteLast(PPNODE Head)
{
	PNODE temp=*Head;
	PNODE temp1=temp->next;
	
	if(*Head ==NULL)
	{
		return ;
	}
	else if((*Head)->next ==NULL)
	{
		free(temp);
		*Head=NULL;
	}
	else
	{
		while((temp1->next) != NULL)
		{
			temp= temp->next;
		}
		free(temp->next);
		temp->next =NULL;
	}
}

void Display(PNODE Head)
{
	while(Head != NULL)
	{
		printf("| %d |->",Head->Data);
		Head= Head->next;
	}
	printf("NULL\n");
}

int main()
{
	PNODE First= NULL;
	int iNo=0,iresult=0,ivalue=0;
	
	printf("Enter number :\n");
	scanf("%d",&iNo);
	InsertFirst(&First,iNo);
	
	printf("Enter number :\n");
	scanf("%d",&iNo);
	InsertFirst(&First,iNo);
	
	printf("Enter number :\n");
	scanf("%d",&iNo);
	InsertFirst(&First,iNo);
	
	Display(First);
	
	iresult=Count(First);
	printf("Total count of numbers are %d",iresult);
	
	printf("\nEnter at last entry number :\n");
	scanf("%d",&iNo);
	InsertLast(&First,iNo);
	
	Display(First);
	
	iresult=Count(First);
	printf("Total count of numbers are %d\n",iresult);
	
	DeleteFirst(&First);
	
	Display(First);
	
	iresult=Count(First);
	printf("Total count of numbers are %d",iresult);
	
	DeleteLast(&First);
	
	Display(First);
	
	iresult=Count(First);
	printf("Total count of numbers are %d",iresult);
	
	
	printf("Enter number for adding new member :\n");
	scanf("%d",&ivalue);

	InsertAtPos(&First,iNo,ivalue);
	
	Display(First);
	
	iresult=Count(First);
	printf("Total count of numbers are %d",iresult);
	
	return 0;
}