#include<stdio.h>

void pattern(int ino)
{
    int icnt=0;

    if(ino<0)
    {
        ino=-ino;
    }

    for(int icnt=1;icnt<=ino;icnt++)
    {
        int iresult=icnt *2;
        printf("%d\t",iresult);
    }
}
int main()
{
    int ivalue=0;
    printf("enter number of elements :");
    scanf("%d",&ivalue);

    pattern(ivalue);

    return 0;
}