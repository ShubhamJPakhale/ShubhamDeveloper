#include<stdio.h>
typedef int bool;

#define TRUE 1
#define FALSE 0

int Sumoffacor(int ino2)
{
    int ival=0,isum=1;

    if(ival==0)
    {
        return 0;
    }

    if(ival<0)
    {
        ival= -ival;
    }

    for(ival=2;ival<=ino2/2;ival++)
    {
        if((ino2 % ival) ==0)
        {
            isum=isum + ival;
        }
    }
    return isum;
}

bool ChkPerfect(int ivalue1)
{
    int ibackup=ivalue1;
    int iret1=0;

    if(ivalue1 < 0)
    {
        ivalue1= -ivalue1;
    }

    if((ivalue1==1) || (ivalue1==0))
    {
        return FALSE;
    }

    iret1=Sumoffacor(ivalue1);

    if(iret1 == ibackup)
    {
        return TRUE;
    }
    else 
    {
        return FALSE;
    }
}

int main()
{
    int ino=0;
    bool bret=TRUE;

    printf("Enter number is : ");
    scanf("%d",&ino);

    bret=ChkPerfect(ino);

    if(bret==TRUE)
    {
        printf("Number is perfect\n");
    }
    else
    {
        printf("Number is not perfect\n");
    }

    return 0;
}