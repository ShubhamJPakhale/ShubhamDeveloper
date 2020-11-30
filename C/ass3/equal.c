#include<stdio.h>

typedef int bool;

#define TRUE 1
#define FALSE 0

bool chkEqual(int val1,int val2)
{
    if(val1==val2)
    {
        return TRUE;
    }
}

int main()
{
    int ino1=0,ino2=0;
    bool bret=FALSE;

    printf("Enter two number:");
    scanf("%d %d",&ino1,&ino2);

    bret=chkEqual(ino1,ino2);
    
    if(bret== TRUE)
    {
        printf("Number is equal");
    }
    else
    {
        printf("Number is not equal");
    }

    return 0;
}