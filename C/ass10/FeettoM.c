#include<stdio.h>

double FeetToMeter(int ino)
{
    double dresult=0;

    dresult= ino * 0.0929;

    return dresult;
}

int main()
{
    int ivalue=0;
    double dret=0.0;

    printf("Enter number :");
    scanf("%d",&ivalue);

    dret=FeetToMeter(ivalue);

    printf("%d Feet = %f M",ivalue,dret);

    return 0;
}