#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

void InsertLast(PPNODE Head, PPNODE Tail, int value)
{
	PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = value;
    newn->next = NULL;
	
    if((*Head ==NULL) &&(* Tail == NULL)) // Linked list is empty
    {
       *Head = newn;
       *Tail = newn;
    }
    else // Linked list contains atleast one node
    {
       (*Tail)->next = newn;
       *Tail = (*Tail) ->next;
	}	   // *Tail = newn;
    (*Tail)->next = *Head;
}

void InsertFirst(PPNODE Head, PPNODE Tail, int value)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = value;
    newn->next = NULL;
	
    if((*Head ==NULL) && (*Tail == NULL)) // Linked list is empty
    {
       *Head = newn;
       *Tail = newn;
    }
	else
	{
		newn->next=*Head;
		*Head=newn;
	}
	(*Tail)->next=*Head;
}

void DeleteFirst(PPNODE Head, PPNODE Tail)
{
	PNODE temp=*Head;
	
	if(Head ==NULL && Tail==NULL)
	{
		return;
	}
	
	if(*Head ==*Tail)
	{
		free(*Head);
		*Head=NULL;
		*Tail=NULL;
		return;
	}
	else
	{
		*Head=(*Head)->next;
		free((*Tail)->next);	
	   (*Tail)->next=*Head;
	}
}

void DeleteLast(PPNODE Head, PPNODE Tail)
{
	PNODE temp=*Head;
	
	if(Head ==NULL && Tail==NULL)
	{
		return;
	}
	
	if(*Head == *Tail)
	{
		free(*Head);
		*Head=NULL;
		*Tail=NULL;
		return ;
	}
	else
	{
		while(temp->next != *Tail)
		{
			temp=temp->next;
		}
		free(*Tail);
        *Tail = temp;
        (*Tail)->next = *Head;
    }
}
void DeleteAtPos(PPNODE Head,PPNODE Tail,int pos)
{
	PNODE temp=*Head;
	PNODE temp2=NULL;
		
	int size=0,i=0;
	size=Count(*Head,*Tail);
	
	if(pos <1 || pos > size)
	{
		return;
	}
	else if(pos ==1)
	{
		DeleteFirst(Head,Tail);
	}
	else if(pos == size)
	{
		DeleteLast(Head,Tail);
	}
	else
	{
		for(i=1;i<pos-1;i++)
		{
			temp=temp->next;
		}
		temp2=temp -> next;
		temp->next=temp2->next;
		free(temp2);
	}
}


void InsertAtPos(PPNODE Head,PPNODE Tail,int iNo,int Pos)
{
	int size=0,i=0;
	PNODE temp=*Head;
	PNODE newn=NULL;
	
	size=Count(*Head,*Tail);

	if((Pos<1 )||( Pos>(size + 1)))
	{
		return;
	}
	else if(Pos ==1)
	{
		InsertFirst(Head,Tail,iNo);
	}
	else if(Pos== size+1)
	{
		InsertLast(Head,Tail,iNo);
	}
	else
	{
		newn=(PNODE)malloc(sizeof(NODE));
	    newn->data=iNo;	
	
		for(i=1;i<Pos-1;i++)
		{
			temp=temp->next;
		}
		newn->next= temp->next;
		temp->next=newn;
	}
}

void Display(PNODE Head, PNODE Tail)
{
   if(Head ==NULL && Tail==NULL)
   {
       return;
   }
   
   do
   {
       printf("|%d| -> ",Head->data);
       Head = Head -> next;
   }while(Head != Tail -> next);
   printf("NULL\n");
}

int Count(PNODE Head, PNODE Tail)
{
	int icnt=0;
	
    if(Head ==NULL && Tail==NULL)
    {
       return;
    }
   
    do
    {
	   icnt++;
       Head = Head -> next;
    }while(Head != Tail -> next);
   
    return icnt;
}

int main()
{
   PNODE First = NULL;
   PNODE Last = NULL; 
   int choice=1,no = 0,pos=0,iret=0;
   
   printf("-----------------\n");
   printf("SHUBHMA PAKHALE DATA STRUCTURE PROJECT\n");
   printf("\n SINGLY CIRCULAR \n");
   printf("-----------------\n");
   
   while(choice)
   {
	   printf("Enter choice number:");
       printf("-----------------\n");
       printf("1.InsertFirst\n2.InsertLast\n3.InsertAtPos\n4.DeleteFirst\n5.DeleteLast\n6.DeleteAtPos\n7.Display\n8.Count\n");
	   scanf("%d",&choice);
	   printf("-----------------\n");
	   
	   switch(choice)
	   {
		    case 1:
               printf("Enter number : ");
               scanf("%d",&no);
               InsertFirst(&First,&Last,no);
			   break;
			  
		    case 2:
		       printf("Enter number : ");
               scanf("%d",&no);
               InsertLast(&First,&Last,no);
			   break;
			   
		    case 3:
			   printf("Enter number : ");
               scanf("%d",&no);
			   printf("Enter position number : ");
               scanf("%d",&pos);
               InsertAtPos(&First,&Last,no,pos);
			   break;
			   
			case 4:
			   DeleteFirst(&First,&Last);
			   break;
			   
			case 5:
			   DeleteLast(&First,&Last);
			   break;
			 
			case 6:
			    printf("Enter position number : ");
                scanf("%d",&pos);
                DeleteAtPos(&First,&Last,pos);
				break;
				
			case 7:
			    Display(First,Last);
				break;
			
			case 8:
                printf("\nnumber of elements in list are :%d\n",Count(First,Last));
				break;
	   }
   }
   return 0;
}