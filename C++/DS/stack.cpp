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
	
	void push(int no)   //InsertFirst
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
	
	void pop()
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
	int choice=1,no=0;
	
	Stack obj1;
	
	cout<<"---------------------\n";
	cout<<"DATA STRUCTURE USING C++\n";
	cout<<"STACK PROJEXT BY SHUBHAM\n";
	cout<<"---------------------\n";
	
	while(choice)
	{
		cout<<"1.PUSH\n2.POP\n3.DISPLAY\n4.COUNT\n0.EXIT\n";
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
			   
			   obj1.push(no);
			   break;
			
			case 2:
			   obj1.pop();
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
			   
			case 0: 
			   cout<<"Thank you for using this application\n";
			   cout<<"---------------------\n";
			   
			default :
			   cout<<"Enter correct choice between 1 to 4\n";
			   cout<<"---------------------\n";
			   
		}
	}
	return 0;
}