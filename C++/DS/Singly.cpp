#include<iostream>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
};

typedef struct Node NODE;
typedef struct Node * PNODE;

class Stack
{
	public :
	   PNODE Head;
	
	Stack()
	{
		Head=NULL;
	}
	
	void InsertFirst(int no)   //pop
	{
		PNODE newn= new NODE;
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
		PNODE newn= new NODE;
		newn->data=no;
		   		
		if(Head==NULL)
		{
			Head=newn;
		}
		else
		{
			while(Head->next !=NULL)
			{
				Head=Head->next;
			}
			Head->next=newn;
			newn->next=NULL;
		}
	}
	
	void DeleteFirst()  //push
	{
		if(Head == NULL)
		{
			cout<<"Stack is empty\n";
			return ;
		}
		else
		{
			PNODE temp=Head;
		    int value=0;
			value=Head->data;
			cout<<"poped value is :"<<value<<"\n";
			cout<<"---------------------\n";
			Head=Head->next;
			delete temp;
			
		}
	}
	
	void DeleteLast()  
	{
		PNODE temp=Head;
		
		if(Head == NULL)
		{
			cout<<"Stack is empty\n";
			return ;
		}
		else if(Head->next ==NULL)
		{
			delete (Head);
			Head=NULL;
		}
		else 
		{
		    while(temp->next->next !=NULL)
			{
				temp=temp->next;
			}
			delete (temp->next);
			temp->next=NULL;
		}
	}
	
	void InsertAtPos(int no,int pos)
	{
		int size=0;
		size=Count();
		
		if(pos <1 || pos >size+1)
		{
			return ;
		}
		
		if(pos ==1)
		{
			InsertFirst(no);
		}
		else if(pos == size+1)
		{
			InsertLast(no);
		}
		else
		{
			PNODE newn= new NODE;
		    newn->data=no;
		    newn->next=NULL;
         	
			int i=0;
			
			for(i=1;i<pos-1;i++)
			{
				Head=Head->next;
			}
			newn->next=Head->next;
			Head->next=newn;
		}
	}
	
	void DeleteAtPos(int pos)
	{
		int size=0;
		size=Count();
		
		if(pos <1 || pos >size)
		{
			return ;
		}
		
		if(pos ==1)
		{
			DeleteFirst();
		}
		else if(pos == size)
		{
			DeleteLast();
		}
		else
		{
			PNODE temp=Head;
			
			int i=0;
			
			for(i=1;i<pos-1;i++)
			{
				temp=temp->next;
			}
			temp->next=temp->next->next;
			delete (temp->next);
		}
	}
	
	void Display()
	{
		PNODE temp=Head;
		
		while(temp !=NULL)
		{
			cout<<"|"<<temp->data<<"|->";
			temp=temp->next;
		}
		cout<<"NULL\n";
	}
	
	int Count()
	{
		PNODE temp=Head;
		int icnt=0;
		
		while(temp !=NULL)
		{
			icnt++;
			temp=temp->next;
		}
		return icnt;
	}
};

int main()
{
	PNODE First=NULL;
	int choice=1,no=0,pos=0;
	
	Stack obj1;
	
	cout<<"---------------------\n";
	cout<<"DATA STRUCTURE USING C++\n";
	cout<<"STACK PROJEXT BY SHUBHAM\n";
	cout<<"---------------------\n";
	
	while(choice)
	{
		cout<<"1.InsertFirst\n2.DeleteFirst\n3.DISPLAY\n4.COUNT\n5.InsertLast\n6.DeleteLast\n7.InsetAtPos\n8.DeleteAtPos\n0.EXIT\n";
		cout<<"---------------------\n";
		cout<<"Enter your choice number from above choice\n";
	    cin>>choice;
		cout<<"---------------------\n";
		
		switch(choice)
		{
			case 1:
			   cout<<"Enter number for Entry:";
			   cin>>no;
			   cout<<"---------------------\n";
			   obj1.InsertFirst(no);
			   break;
			
			case 2:
			   obj1.DeleteFirst();
			   cout<<"---------------------\n";
			   break;
			   
			case 3:
			   cout<<"Elements in list are :";
			   obj1.Display();
		
			   break;
			   
			case 4: 
			   cout<<"Number of elements in list is :"<<obj1.Count();
			   cout<<"---------------------\n";
			   break;
			
			case 5:
			   cout<<"Enter number:\n";
			   cin>>no;
			   obj1.InsertLast(no);
			   break;
			   
			case 6:
			   obj1.DeleteLast();
			   break;
			   
			case 7:
			   cout<<"enter number :";
			   cin>>no;
			   cout<<"enter position number :";
			   cin>>pos;
			   obj1.InsertAtPos(no,pos);
			   break;
			   
			case 8:
			   cout<<"enter position number :";
			   cin>>pos;
			   obj1.DeleteAtPos(pos);
			   break;
			   
			case 0: 
			   cout<<"Thank you for using this application\n";
			   cout<<"---------------------\n";
			    
		}
	}
	return 0;
}