#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
	int data;
	struct Node *next;
}NODE,*PNODE,**PPNODE;

void push(PPNODE Head,int no) //InsertLast
{
	PNODE newn=NULL;
	PNODE temp=NULL;
	
	newn=(PNODE)malloc(sizeof(NODE));
	newn->data=no;
	newn->next=NULL;
	
	if(*Head ==NULL)
	{
		*Head=newn;
	}
	else
	{
		temp=*Head;
		
		while(temp->next !=NULL)
		{
			temp=temp->next;
		}
		temp->next=newn;
	}
}

void pop(PPNODE Head)   //Deletefirst
{
	int no=0;
	PNODE temp=*Head;
	
	if(*Head ==NULL)
	{
		printf("STACK IS EMPTY\n");
		return -1;
	}
	else
	{
		no=(*Head)->data;
		*Head=(*Head)->next;
		printf("popped element is %d\n",no);
		free(temp);
	}	
}

void peep(PPNODE Head)   //print first number
{
	int no=0;
	
	if(*Head ==NULL)
	{
		printf("STACK IS EMPTY\n");
		return -1;
	}
	else
	{
		no=(*Head)->data;
		printf("peep element number is %d\n",no);
	}	
}

void Display(PNODE Head)
{
	while(Head != NULL)
	{
		printf("| %d |->",Head->data);
		Head= Head->next;
	}
	printf("NULL\n");
}

int count(PNODE Head)
{
	int icnt=0;
	while(Head != NULL)
	{
		icnt++;
		Head= Head->next;
	}
	return icnt;
}

int main()
{
	PNODE First=NULL;
	int no=0,choice=1;
	
	printf("DYNAMIC IMPLEMENTATION OF STACK\n");
	
	while(choice)
	{
		printf("---------------\n");
		printf("enter your choicenumber form among functions :\n");
		printf("1.Push member\n2.pop element\n3.Display element\n4.count\n5.peep\n");
		scanf("%d",&choice);
		printf("---------------\n");
		
		switch(choice)
		{
			case 1:
			  printf("enter number :\n");
	          scanf("%d",&no);
	          push(&First,no);
			  break;
			
			case 2:
	          pop(&First);
			  break;
			  
			case 3:
			   printf("number in elements are :\n");
			   Display(First);
			   break;
			   
			case 4 :
			   printf("Number of elements in list are :%d\n",count(First));
			   break;
			   
			case 5 :
			    peep(&First);
			    break;
			  
			case 0 :
			   printf("Thank you for using this application\n");
		}
	}
	return 0;
}
