#include<stdio.h>

int display(int i, int j)
{
    int k=0;
    for(k=1;k<=j;k++)
    {
        printf("%d\t",i);
    }
}

int main()
{
    int a=0;int b=0;

    printf("Enter number\n");
    scanf("%d",&a);

    printf("Enter number\n");
    scanf("%d",&b);

    display(a,b);

    return 0;
}