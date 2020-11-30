#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
};

typedef struct Node NODE;
typedef struct Node *PNODE;
typedef struct Node **PPNODE;

void InsertFirst(PPNODE Head,int no)
{
	PNODE newn=NULL;
	
	newn=(PNODE)malloc(sizeof(NODE));
	newn->data=no;
	newn->next=NULL;
	
	if(*Head == NULL)
	{
		*Head=newn;
	}
	else
	{
		newn->next=*Head;
		*Head=newn;
	}
}

void InsertLast(PPNODE Head,int no)
{
	PNODE newn=NULL;
	PNODE temp=*Head;
	
	newn=(PNODE)malloc(sizeof(NODE));
	newn->data=no;
	newn->next=NULL;
	
	if(*Head == NULL)
	{
		*Head=newn;
	}
	else
	{
		while(temp->next !=NULL)
		{
			temp=temp ->next;
		}
		temp ->next=newn;
	}
}

int SerachFirstOcc(PNODE Head,int no)
{
	int icnt=0;
	while(Head != NULL)
	{
		icnt++;
		if(Head->data == no)
		{
			break;
		}
		Head=Head->next;
	}
	return icnt;
}

int SerachLastOcc(PNODE Head,int no)
{
	int icnt=0,ipos;
	while(Head != NULL)
	{
		icnt++;
		if(Head->data == no)
		{
			ipos=icnt;
		}
		
		Head=Head->next;
	}
	return ipos;
}

void Display(PNODE Head)
{
	while(Head != NULL)
	{
		printf("|%d|->",Head->data);
		Head=Head->next;
	}
	printf("NULL\n");
}

int Count(PNODE Head)
{
	int icnt=0;
	while(Head != NULL)
	{
		icnt++;
		Head=Head->next;
	}
	return icnt;
}

int Addition(PNODE Head)
{
	int add=0;
	while(Head != NULL)
	{
		add=Head->data +add;
		Head=Head->next;
	}
	return add;
}

int Maximum(PNODE Head)
{
	int Max=Head->data;
	while(Head != NULL)
	{
		if((Head ->data) >Max)
		{
			Max=Head->data;
		}
		Head=Head->next;
	}
	return Max;
}

int SamllNum(PNODE Head)
{
	int Small=Head->data;
	while(Head != NULL)
	{
		if((Head ->data) <Small)
		{
			Small=Head->data;
		}
		Head=Head->next;
	}
	return Small;
}

void Displayperfect(PNODE Head)
{
	while(Head !=NULL)
	{
		int add=1,i=0;
		for(i=2;i<=((Head->data)/2);i++)
		{
			if((Head->data % i) ==0)
			{
				add=i+add;
				if((Head->data) ==add)
		        {
			       printf("%d\t",Head->data);
		        }
			}
		}
		Head=Head->next;
	}
}

void Prime(PNODE Head)
{
	while(Head !=NULL)
	{
		int i=0,icnt=0;
		for(i=1;i<=(Head->data);i++)
		{
			if((Head->data % i) ==0)
			{
				icnt++;
			}	
		}
		if(icnt==2)
		{
			printf("%d\t",Head->data);
		}
		Head=Head->next;
	}
}

int AdditionEven(PNODE Head)
{
	int add=0;
	while(Head != NULL)
	{
		if((Head->data %2 )==0)
		{
			add=Head->data +add;
		}
		Head=Head->next;
	}
	return add;
}

int SecondMaximum(PNODE Head)
{
	int Max=Head->data;
	int temp=0;
	while(Head != NULL)
	{
		temp=Max;
	    if((Head ->data) > Max) 
	    {
			Max=Head->data;
		}
		else if((Head ->data) < Max )
		{
			temp=Head->data;
		}
		Head=Head->next;
	}
	return temp;
}

void SumDigit(PNODE Head)
{
	
	while(Head != NULL)
	{
		int isum=0,iDigit=0;
		while((Head->data) !=0)
		{
			iDigit=(Head->data)%10;
		    isum=iDigit + isum;
		    (Head->data)=(Head->data)/10;
		}
		printf("%d\t",isum);
		Head=Head->next;
	}
}

int main()
{
	int no=0,no1=0,no2=0,iret=0;
	PNODE First=NULL;
	/*
	InsertFirst(&First,111);
	InsertFirst(&First,101);
	InsertFirst(&First,51);
	InsertFirst(&First,21);
	InsertFirst(&First,11);
	
	Display(First);
	
	iret=Count(First);
	printf("total number of members are: %d",iret);
	*/
	printf("\nEnter number for member in list :");
	scanf("%d",&no);
	printf("enter value of data:\n");
	for(int i=0;i<no;i++)
	{
		scanf("%d",&no1);
		InsertLast(&First,no1);
	}
	
	Display(First);

	iret=Count(First);
	printf("total number of members are: %d\n",iret);
	
	printf("\nEnter number search member in list :");
	scanf("%d",&no2);
	SerachFirstOcc(First,no2);
	
	iret=SerachFirstOcc(First,no2);
	printf("Number found at %d\n",iret);
	
	printf("\nEnter number search member in list :");
	scanf("%d",&no2);
	SerachLastOcc(First,no2);
	iret=SerachLastOcc(First,no2);
	printf("Number found at %d\n",iret);
	
	iret=Addition(First);
	printf("Addition of numbers is %d\n",iret);
	
	iret=Maximum(First);
	printf("Maximum numbers is %d\n",iret);
	
	iret=SamllNum(First);
	printf("Minimum numbers is %d\n",iret);
	
	printf("Perfect Number in list are :");
	Displayperfect(First);
	
	printf("\nPrime Number in list are :");
	Prime(First);
	
	iret=AdditionEven(First);
	printf("\nAddition of Even numbers are : %d",iret);
	
	iret=SecondMaximum(First);
	printf("\nSecond Maximum numbers is %d\n",iret);
	
	Display(First);
	SumDigit(First);
	
	/*
	printf("\n");
	LargeDigit(First);
	Display(First);
	
	ReverseNum(First);
	Display(First);
	*/
	
	
	return 0;
}
