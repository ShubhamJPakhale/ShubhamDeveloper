#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE;

class SinglyLinkedList
{
public:
    PNODE Head;
    
    SinglyLinkedList()
    {
        Head = NULL;
    }
    
    void InsertFirst(int no)
    {
        PNODE newn = new NODE;
        newn->data = no;
        newn->next = NULL;
        
        if(Head == NULL)
        {
            Head = newn;
        }
        else
        {
            newn->next = Head;
            Head = newn;
        }
    }
    
    void InsertLast(int no)
    {
        PNODE newn = new NODE;
        newn->data = no;
        newn->next = NULL;
        
        if(Head == NULL)
        {
            Head = newn;
        }
        else
        {
            PNODE temp = Head;
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newn;
        }
    }

    void InsertAtpos(int no,int pos)
    {
    	PNODE temp=Head;
    	int size=Count();

    	if(pos<1 || pos >size+1)
    	{
    		return ;
    	}
    	else if(pos==1)
    	{
    		InsertFirst(no);
    	}
    	else if(pos==size+1)
    	{
    		InsertLast(no);
    	}
    	else
    	{
    		PNODE newn=new NODE;
    		newn->data=no;
    	   
    		for(int i=1;i<pos-1;i++)
    		{
    			temp=temp->next;
    		}
    		newn->next=temp->next;
    		temp->next=newn;    	}
    }
    
    void Display()
    {
        PNODE temp = Head;
        cout<<"Elements of linked list are\n";
        while(temp != NULL)
        {
            cout<<temp->data<<"\t";
            temp = temp -> next;
        }
        cout<<"\n";
    }
    
    int Count()
    {
        int iCnt = 0;
        PNODE temp = Head;

        while(temp != NULL)
        {
            temp = temp -> next;
            iCnt++;
        }
        return iCnt;
    }

    void DeleteFirst()
    {
    	PNODE temp=Head;

    	if(Head !=NULL)
    	{
    		Head=Head->next;
    		delete(temp);
    	}
    }

    void DeleteLast()
    {
    	PNODE temp=Head;

    	if(Head==NULL)
    	{
    		return;
    	}
    	else if(temp->next ==NULL)
    	{
    		Head=NULL;
    		delete(temp);
    	}
    	else
    	{
    		while(temp->next->next !=NULL)
    		{
    			temp=temp->next;
    		}
    		temp->next=NULL;
    		delete(temp->next);
    	}
    }

    void DeleteAtpos(int pos)
    {
    	int size=0;int i=0;
    	size=Count();

    	if(pos<1 || pos >size)
    	{
    		return ;
    	}

    	if(pos==1)
    	{
    		DeleteFirst();
    	}
    	else if(pos==size)
    	{
    		DeleteLast();
    	}
    	else
    	{
    		PNODE temp=Head;
    		PNODE temp2=temp->next;
    		
    		for(i=1;i<pos-1;i++)
    		{
    			temp=temp->next;
    		}
    		temp2=temp->next;
    		temp->next=temp2->next;
    		delete(temp2);
    	}
    }
};

int main()
{
	int a=0,iret=0,b=0,c=0,pos=0,choice=1;
    SinglyLinkedList obj;
    
    cout<<"This is singly linked list program in c++\n";
   	cout<<"choices for performing operation on SinglyLinkedList as :\n";

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
   
    return 0;
}