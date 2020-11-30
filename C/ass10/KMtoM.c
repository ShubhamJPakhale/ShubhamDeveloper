#include<stdio.h>

int KmToMeter(int ino)
{
    int iresult=0;

    iresult= ino * 1000;

    return iresult;
}

int main()
{
    int ivalue=0,iret=0;

    printf("Enter number :");
    scanf("%d",&ivalue);

    iret=KmToMeter(ivalue);

    printf("%d M",iret);

    return 0;
}