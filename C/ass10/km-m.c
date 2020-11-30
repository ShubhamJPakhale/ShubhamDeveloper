#include<stdio.h>

int KmToMeter(int ino)
{
    int im=1000;
    int iresult=0;

    iresult= ino * im;

    return iresult;
}

int main()
{
    int ivalue=0,iret=0;

    printf("Enter number :");
    scanf("%d KM",&ivalue);

    iret=KmToMeter(ivalue);

    printf("%d km = %d m",ivalue,iret);

    return 0;
}