#include<stdio.h>

void InsertAtPos(PPNODE Head,PPNODE Tail,int No,int pos)
{
	int size=0;
	PNODE temp=*Head;
	size=Count(*Head,*Tail);
	
	if(pos<1 || pos>size+1)
	{
		return;
	}
	else if(pos==1)
	{
		InsertFirst(Head,Tail,No);
	}
	else if(pos==size+1)
	{
		InsertLast(Head,Tail,No);
	}
	else
	{
		PNODE newn=NULL;
		
		newn=(PNODE)malloc(sizeof(NODE));
		newn->data=No;
		newn->next=NULL;
		
		for(int i=0;i<pos-1;i++)
		{
			temp=temp->next;
		}
		newn->next=temp->next;
		temp->next=newn;
	}
}
		
/*
EMPLOYEE DATA FINDING INFO PROJECT 
c++ program

struct employ
{
	int eid;
	string projrct_name;
	string ename;
	struct node *next;
}

functio :
update,
8 function,
search,
search by name,
search by projrct,





*/
