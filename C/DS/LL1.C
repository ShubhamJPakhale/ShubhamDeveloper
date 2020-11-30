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
    int temp=0;

    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;

    if(*Head == NULL)
    {
        *Head=newn;
    }
    else
    {
        PNODE temp=*Head;

        while(temp->next != NULL)
        {
            temp=temp->next;
        }
        temp->next = Head;  
    }
}

int Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("%d\t",Head->data);
        Head=Head-> next;
    }
}

int Count(PNODE Head)
{
    int icnt=0;

    while(Head != NULL)
    {
        icnt++;
        Head=Head-> next;
    }
    return icnt;
}

void Search(PNODE Head,int no1)
{
    while(Head !=NULL)
    {
        int i=0;
        if(Head->data == no1)
        {
            printf("Element found in data structure is at %d",i+1);
        }
        i++;
        Head=Head->next;  
    }

    if(Head->data == no1)
    {
       printf(" position in linked list\n");
    }
    else
    {
        printf("Element not found in data structure\n");
    }
}

int main()
{
    PNODE First=NULL;

    printf("insert various entries for storage in data structure as :\n");

    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);
   
   
    Display(First);

   int iret= Count(First);
   printf("\nnumber of elements in linked list are:%d\n",iret);

   Search(First,21);

   InsertLast(&First,101);

   Display(First);
    return 0;
}