#include<stdio.h>

void Display(int no)
{
    if(no>0)
    {
        printf("*\t");
        no--;
        Display(no);
    }
}

int main()
{
    int no=0;

    printf("Enter Number : \n");
    scanf("%d",&no);

    Display(no);

    return 0;
}