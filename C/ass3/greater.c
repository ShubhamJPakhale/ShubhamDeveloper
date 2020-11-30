#include<stdio.h>
typedef int bool;

#define TRUE 1
#define FALSE 0

bool chknumber(int ivalue)
{
    if(ivalue > 100)
    {
        return TRUE;
    }
    
}

int main()
{
    int ino=0;
    bool bret=FALSE;

    printf("enter number :");
    scanf("%d",&ino);

    bret=chknumber(ino);

    if(bret==TRUE)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }

    return 0;
}