#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node * next;
	struct Node * prev;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

void InsertFirst(PPNODE Head,PPNODE Tail,int no)
{
	PNODE newn=NULL;
	
	newn=(PNODE)malloc(sizeof(NODE));
	newn->data=no;
	newn->next=NULL;
	newn->prev=NULL;
	
	if((*Head ==NULL) && (*Tail ==NULL))
	{
		*Head=newn;
		*Tail=newn;
	}
	else
	{
		(*Head)->prev=newn;
		newn->next=(*Head);
		(*Head)=(*Head)->prev;
	}
	(*Head)->prev=(*Tail);
	(*Tail)->next=(*Head);
}

void InsertLast(PPNODE Head,PPNODE Tail,int no)
{
	PNODE newn=NULL;
	
	newn=(PNODE)malloc(sizeof(NODE));
	newn->data=no;
	newn->next=NULL;
	newn->prev=NULL;
	
	if((*Head ==NULL) && (*Tail ==NULL))
	{
		*Head=newn;
		*Tail=newn;
	}
	else
	{
		newn->prev=(*Tail);
		(*Tail)->next=newn;
		
		(*Tail)=(*Tail)->next;
	}
	(*Head)->prev=(*Tail);
	(*Tail)->next=(*Head);
}

void InsertAtPos(PPNODE Head,PPNODE Tail,int value,int pos)
{
	int size=0;
	PNODE newn=NULL;
	PNODE temp=*Head;
		
	size=Count(*Head,*Tail);
	
	if(pos<1 && pos>size+1)
	{
		return ;
	}
	else if(pos==1)
	{
		InsertFirst(Head,Tail,value);
	}
	else if(pos==size+1)
	{
		InsertLast(Head,Tail,value);
	}
	else
	{
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
		temp->next->prev=newn;
		
		temp->next=newn;
		newn->prev=temp;
	}		

}

void DeleteFirst(PPNODE Head,PPNODE Tail)
{
	if(*Head == NULL&&*Tail==NULL)//no member
	{
		return ;
	}
	
	if(*Head==*Tail)  //single node
	{
		free(*Head);
		*Head=NULL;
		*Tail=NULL;
	}
	else    //more than one node
	{
		*Head=(*Head)->next;
		free((*Tail)->next);
	   (*Head)->prev=*Tail;
	   (*Tail)->next=*Head;
	}
}

void DeleteLast(PPNODE Head,PPNODE Tail)
{
	if(*Tail == NULL)
	{
		return ;
	}
	
	if(*Head==*Tail)
	{
		free(*Tail);
		*Head=NULL;
		*Tail=NULL;
	}
	else
	{
		*Tail=(*Tail)->prev;
		free((*Tail)->next);  //free((*Head)->prev);
	   (*Head)->prev=*Tail;
	   (*Tail)->next=*Head;
	}
	
}

void DeleteAtPos(PPNODE Head,PPNODE Tail,int pos)
{
	PNODE temp=*Head;
	
	int size=0;
	size=Count(*Head,*Tail);
	
	if(pos < 1 || pos >size+1)
	{
		return;
	}
	else if(pos == 1)
	{
		DeleteFirst(Head,Tail);
	}
	else if(pos == size)
	{
		DeleteLast(Head,Tail);
	}
	else
	{	
		int i=0;
		for(i=1;i<pos-1;i++)
		{
			temp=temp->next;
		}
		temp->next=temp->next->next;
		temp->next->next->prev=temp;
		free(temp->next);
	}
	
}

void Display(PNODE Head,PNODE Tail)
{
	if((Head == NULL) && (Tail == NULL))
	{
		return ;
	}
	do
	{
	    printf("|%d|<=>",Head->data);
	    Head=Head->next;
	}while(Head !=Tail->next);
	
	printf("NULL\n");
}

int Count(PNODE Head,PNODE Tail)
{
	int icnt=0;
	
	if((Head == NULL) && (Tail == NULL))
	{
		return ;
	}
	do
	{
	    icnt++;
	    Head=Head->next;
	}while(Head !=Tail->next);
	
	return icnt;
}

int main()
{
   PNODE First = NULL;
   PNODE Last = NULL; 
   int choice=1,no = 0,pos=0,iret=0;
   
   printf("-----------------\n");
   printf("SHUBHMA PAKHALE DATA STRUCTURE PROJECT\n");
   printf("\n DOUBLY CIRCULAR \n");
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