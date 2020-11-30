#include<stdio.h>

void Display(int ivalue)
{
    int i=0,j=0;

    for(i=1;i<=ivalue;i++)
    {
        printf("*\t");
    }
    for(j=1;j<=ivalue;j++)
    {
        printf("#\t");
    }
}
int main()
{
    int ino=0;

    printf("Enter number :\n");
    scanf("%d",&ino);

    Display(ino);

    return 0;
}