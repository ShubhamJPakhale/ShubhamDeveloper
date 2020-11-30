#include<stdio.h>

void pattern(int ino)
{
    char ch='A';
    int val= (int) ch;

    if(ino<0)
    {
        ino=-ino;
    }

    for(ch='A';ch<(val + ino);ch++)
    {
        printf("%c\t",ch);
    }
}

int main()
{
    int ivalue=0;
    printf("Enter number of elements :");
    scanf("%d",&ivalue);

    pattern(ivalue);

    return 0;
}