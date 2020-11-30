#include<stdio.h>

int display(int i)
{
    if(i<10)
    {
        printf("HELLO");
    }
    else
    {
        printf("DEMO");
    }
}

int main()
{
    int j=0;

    printf("Enter number");
    scanf("%d",&j);

    display(j);
    return 0;
}