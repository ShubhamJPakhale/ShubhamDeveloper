#include<stdio.h>
#include<stdlib.h>

typedef struct Node  NODE;
typedef struct Node *PNODE;
typedef struct Node **PPNODE;

struct Node
{
	int Data;
	struct Node * next;
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
		Head = Head->next;
	}
	return icnt;
}

void InsertAtPos(PPNODE Head,int iNo,int Pos)
{
	int size=0,i=0;
	PNODE temp=*Head;
	PNODE newn=NULL;
	
	size=Count(*Head);

	if((Pos<1 )||( Pos>(size + 1)))
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
	
		for(i=1;i<Pos-1;i++)
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
	
	if(*Head ==NULL)
	{
		return;
	}
	else if((*Head)->next ==NULL)
	{
		free(*Head);
		*Head=NULL;
	}
	else
	{
		while((temp->next->next) != NULL)
		{
			temp= temp->next;
		}
		free(temp->next);
		temp->next =NULL;
	}
}
/*
void DeleteAtPos(PPNODE Head,int Pos)
{
	int size=0,i=0;
	PNODE temp=*Head;

	size=Count(*Head);

	if((Pos<1 )||( Pos>(size + 1)))
	{
		return;
	}
	else if(Pos ==1)
	{
		DeleteFirst(Head);
	}
	else if(Pos== size)
	{
		DeleteLast(Head);
	}
	else
	{
		for(i=1;i<Pos-2;i++)
		{
			temp=temp->next;
		}
		//temp=temp->next;  check karne
		temp->next = temp->next->next;
		free(temp);
	}
}
*/
void DeleteAtPos(PNODE Head,int pos)
{
	int Size=0,i=0;
	size=Count(*Head);
	
	if(pos <1 || pos > size)
	{
		return;
	}
	else if(pos ==1)
	{
		DeleteFirst(Head);
	}
	else if(pos == size)
	{
		DeleteLast(Head);
	}
	else
	{
		PNODE temp= Head;
		PNODE temp2=temp->next;
		for(i=0;i<pos-1;i++)
		{
			temp=temp->next;
		}
		temp2=temp -> next;
		temp->next=temp2->next;
		free(temp2);
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
	
	printf("output after deleting first member\n");
	DeleteFirst(&First);
	
	Display(First);
	
	iresult=Count(First);
	printf("Total count of numbers are %d\n",iresult);
	
	printf("output after deleting last member\n");
	DeleteLast(&First);
	
	Display(First);
	
	iresult=Count(First);
	printf("Total count of numbers are %d\n",iresult);
	
	printf("\nEnter number which is insert at any desired position :\n");
	scanf("%d",&iNo);
	printf("Enter position number for adding new member :\n");
	scanf("%d",&ivalue);
	InsertAtPos(&First,iNo,ivalue);
	
	Display(First);
	
	iresult=Count(First);
	printf("Total count of numbers are %d",iresult);
	
	printf("\nEnter position number for deleting member :\n");
	scanf("%d",&ivalue);
	DeleteAtPos(&First,ivalue);
	
	Display(First);
	
	iresult=Count(First);
	printf("Total count of numbers are %d",iresult);
	
	return 0;
}