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
//second method 
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
	Size=Count(Head);
	
	if(pos <1 || pos > Size)
	{
		return;
	}
	else if(pos ==1)
	{
		DeleteFirst(Head);
	}
	else if(pos == Size)
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

void ReverseNum(PNODE Head)
{
	
	while(Head != NULL)
	{
		int isum=0,iDigit=0;
		while((Head->Data) !=0)
		{
			iDigit=(Head->Data)%10;
		    isum=(isum*10) +iDigit ;
		    (Head->Data)=(Head->Data)/10;
		}
		printf("|%d|->\t",isum);
		Head=Head->next;
	}
	printf("NULL\n");
}

int Reverse(int iValue)
{
	int iAns = 0 , iDigit = 0;
	
	while(iValue != 0)
	{
		iDigit = iValue % 10;
		iAns = (iAns * 10) + iDigit;
		iValue = iValue / 10;
	}
	return iAns;
}

void Palindrome(PNODE Head)
{
    int iAns = 0; 
	while(Head != NULL)
	{
		iAns = Reverse(Head->Data);
        if(iAns == (Head->Data) )
        {
		    printf("|%d|->",Head->Data);
        }
		Head = Head->next;
	}
    printf("\n");
}

/*

void DisplayProduct(PNODE Head)
{
    while (Head!=NULL)
    {
        int isum = 1, iDigit =0;
            while ((Head->Data)!=0)
            {
                iDigit = (Head->Data)%10;
                if(iDigit!=0)
                {
                    isum = isum * iDigit;
                }
                (Head->Data) =(Head->Data)/10;
            }
        
            printf("%d\t",isum);
        
        Head = Head -> next; 
    }
}
*/
int LargeNo(int b)
{
	int no=0,iDigit=0;
	
	while(b !=0)
	{
		iDigit=b%10;
		if(iDigit>no)
		{
			no=iDigit;
		}
		b=b/10;
	}
	return no;
}

void LargeDigit(PNODE Head)
{
	while(Head != NULL)
	{
		int no=0;
		while((Head->Data) !=0)
		{
			no=LargeNo(Head->Data);
		    printf("%d\t",no);
		}
		Head=Head->next;
	}
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
	
	printf("Reverse number of elements are :\n");
	ReverseNum(First);
	
	printf("prlindrome number are :\n");
	Palindrome(First);
	
	printf("product of digit in number are:\n");
	LargeDigit(First);
	
	iresult=Count(First);
	printf("Total count of numbers are %d",iresult);
	
	printf("\nEnter position number for deleting member :\n");
	scanf("%d",&ivalue);
	DeleteAtPos(&First,ivalue);
	
	return 0;
}