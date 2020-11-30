#include<stdio.h>

int Factorial(int ivalue)
{
    int ifact=1,ino1=0;

    if(ivalue<0)
    {
        ivalue= -ivalue;
    }

    for(ino1=1;ino1<=ivalue;ino1++)
    {
        ifact=ifact * ino1;
    }
    return ifact;
}
int main()
{
    int ino=0,iret=0;

    printf("Enter number :\n");
    scanf("%d",&ino);

    iret=Factorial(ino);

    printf("Factorial of number is %d",iret);

    return 0;
}
