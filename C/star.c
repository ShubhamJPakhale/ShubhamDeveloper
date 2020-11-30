#include<stdio.h>

void display(int i)
{
    int j=0;
   /* for(j=0;j<=i;j++)
    {
        printf("*");
    }
    */
    while(i>0)
    {
        printf("*");
        i--;
    }
}

int main()
{
    int k=0;

    printf("enter number");
    scanf("%d",&k);

    display(k);

    return 0;
}