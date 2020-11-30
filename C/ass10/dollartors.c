#include<stdio.h>

int DoolarToRupees(int ino)
{
    int iresult=0;

    iresult= ino * 70;

    return iresult;
}

int main()
{
    int ivalue=0,iret=0;

    printf("Enter number :");
    scanf("%d",&ivalue);

    iret=DoolarToRupees(ivalue);

    printf("Value in INR is %d",iret);

    return 0;
}