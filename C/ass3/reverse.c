#include<stdio.h>

int revnum(int ino)
{
    int idigit=0;
    int irev=0;

    while(ino !=0)
    {
        idigit=ino%10;
        irev=(irev*10)+idigit;
        ino = ino/10;
    }
    return irev;
}

int main()
{
    int ivalue=0,iret=0;

    printf("Enter number:");
    scanf("%d",&ivalue);

    iret=revnum(ivalue);
    printf("Reverse number :%d",iret);

    return 0;
}