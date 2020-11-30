#include<stdio.h>

void Accept(int i)
{
    int j=0;
    for(j=0;j<=i;j++)
    {
        printf("*\t");
    }
}

int main()
{
    int k=0;
    k=5;

    Accept(k);
    return 0;
}