#include<stdio.h>

void Pattern(int ivalue)
{
    int ino1=0;

    for(ino1=1;ino1<=ivalue;ino1++)
    {
        printf("$ * ");
    }
}
int main()
{
    int ino=0;

    printf("Enter number :\n");
    scanf("%d",&ino);

    Pattern(ino);

    return 0;
}