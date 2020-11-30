#include<stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL Chkzero(int ino)
{
    int idigit=0;
    while(ino !=0)
    {
        idigit =ino %10;
        if(idigit ==0)
        {
            return TRUE;
        }
        ino=ino/10;
    }
}

int main()
{
    int ivalue=0;
    BOOL bret =FALSE;

    printf("enter number");
    scanf("%d",&ivalue);

    bret=Chkzero(ivalue);

    if(bret== TRUE)
    {
        printf("It contains zero");
    }
    else
    {
        printf("There is no zero");
    }
    return 0;
}