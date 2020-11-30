using namespace std;
#include<iostream>

typedef struct node
{
	int data;
	struct node *next;
	struct node *prev;
}NODE,*PNODE;

class DoublyLinked
{
public:
	PNODE Head;

	DoublyLinked()
	{
		Head=NULL;
	}

	void InsertFirst(int value)
	{
		PNODE newn=new NODE;
		newn->data=value;
		newn->next=NULL;
		newn->prev=NULL;

		if(Head==NULL)
		{
			Head=newn;
		}
		else
		{
			newn->next=Head;
			Head->prev=newn;
			Head=newn;

		}
	}

	void InsertLast(int value)
	{
		PNODE newn=new NODE;
		newn->data=value;
		newn->next=NULL;
		newn->prev=NULL;

		if(Head==NULL)
		{
			Head=newn;
		}
		else
		{
			PNODE temp=Head;

			while(temp ->next !=NULL)
			{
				temp=temp->next;
			}
			temp->next=newn;
			newn->prev=temp;
		}
	}

	void InsertAtpos(int value,int pos)
	{
		int size=0,i=0;
		size=Count();

		if(pos<1 || pos>size+1)
		{
			return;
		}

		if(pos==1)
		{
			InsertFirst(value);
		}
		else if(pos==size+1)
		{
			InsertLast(value);
		}
		else
		{
			PNODE newn=new NODE;
			newn->data=value;
			newn->next=NULL;
			newn->prev=NULL;
			PNODE temp=Head;

			for(i=1;i<pos-1;i++)
			{
				temp=temp->next;
			}
			
			newn->next=temp->next;
			newn->prev=temp;
			temp->next=newn;
		}
	}

	void Display()
	{
		while(Head !=NULL)
		{
			cout<<Head->data<<"\t";
			Head=Head->next;
		}
		cout<<"\n";
	}

	int Count()
	{
		int icnt=0;
		while(Head !=NULL)
		{
			icnt++;
			Head=Head->next;
		}
		return icnt;
	}
};

int main()
{
	//int a=0,iret=0,b=0,c=0,pos=0,choice=1;
    DoublyLinked obj;
    
    obj.InsertFirst(11);
    obj.InsertFirst(21);
    obj.InsertLast(51);
    obj.InsertLast(101);
    obj.InsertAtpos(61,2);

    obj.Display();
    /*
    cout<<"This is singly linked list program in c++\n";
   	cout<<"choices for performing operation on DoublyLinked as :\n";

    while(choice !=0)
    {
    	cout<<"----------------------------------------\n";
    	cout<<"1.InsertFirst\n2.InsertLast\n3.InsertAtpos\n4.DeleteFirst\n5.DeleteLast\n6.DeleteAtpos\n7.Display\n8.Count\n";
    	cout<<"----------------------------------------\n";
    	cin>>choice;


    	switch(choice)
    	{
    		case 1:
    		{
    			cout<<"Enter number for inserting at first position : ";
    			cin>>a;
    			obj.InsertFirst(a);
    		}
    		break;
    	
    		case 2:
    		cout<<"Enter number for inserting at last position : ";
    		cin>>b;
    		obj.InsertLast(b);
    		break;
    	
    		case 3:
    		cout<<"Enter TWO number for inserting at position and position: ";
    		cin>>c;
    		cin>>pos;
    		obj.InsertAtpos(c,pos);
    		break;
    	
    		case 4:
    		cout<<"Deleting first parameter ";
    		obj.DeleteFirst();
    		break;
    	
    		case 5:
    		cout<<"Deleting last parameter ";
    		obj.DeleteLast();
    		break;
    	
    		case 6:
    		cout<<"Enter position number for Deleting \n";
    		cin>>pos;
    		obj.DeleteAtpos(pos);
    		break;
    	
    		case 7:
    		obj.Display();
    		break;
    	
    		case 8:
    		iret=obj.Count();
    		cout<<"number of Elements in linked list are "<<iret<<"\n";
    		break;
    	
    		default :
    		cout<<"wrong choice !!\nplease enter correct choice between 1-8\n";
    	}
    }
   */
	return 0;
}