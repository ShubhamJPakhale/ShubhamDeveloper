//SINGLY LL in c++

using namespace std;
#include<iostream>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

typedef struct node
{
	int data;
	struct node *next;
}NODE,*PNODE;

class SinglyLinkedList
{
public:
	PNODE Head;
    
    SinglyLinkedList()
    {
        Head = NULL;
    }
    
	void Insertfirst(int no)
	{
		PNODE newn=new NODE;
		newn->data=no;
		newn->next=NULL;

		if(Head==NULL)
		{
			Head=newn;
		}
		else
		{
			newn->next=Head;
			Head=newn;
		}
	}

	void InsertLast(int no)
	{
		PNODE newn=new NODE;
		newn->data=no;
		newn->next=NULL;
		
		if(Head==NULL)
		{
			Head=newn;
		}
		else
		{
			PNODE temp=Head;

			while(temp->next !=NULL)
			{
				temp=temp->next;
			}
			temp->next=newn;
		}
	}

	void Display()
	{
		PNODE temp=Head;

		cout<<"Elements in singly linked list are :\n";

		while(temp !=NULL)
		{
			cout<<temp->data<<"\t";
			temp=temp->next;
		}
		cout<<"\n";
	}

	int Count()
	{
		int icnt=0;
		PNODE temp=Head;

		while(temp !=NULL)
		{
			icnt++;
			temp=temp->next;
		}
		return icnt;
	}
}

int main()
{
	int i=0,a=0,iret=0;
	cout<<"Enter number :";
	cin>>i;

	SinglyLinkedList obj;

	obj.Insertfirst(11);
	obj.Insertfirst(21);

	obj.InsertLast(51);
	obj.InsertLast(101);

	//cout<<"Insert position number for inserting number at that position :";
	//cin>>a;
	//obj.InsertAtpos(a,61);

	cout<<obj.Display()<<"\n";

	cout<<"Total Number of Elements in singly linked list are :\n";
	iret=obj.Count();
	cout<<iret<<"\n";

	return 0;
}