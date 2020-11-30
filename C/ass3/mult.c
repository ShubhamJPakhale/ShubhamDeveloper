#include<stdio.h>

int multiply(int ino1,int ino2,int ino3)
{
    int iret=0,icnt=0;

    if(ino1==0)
    {
        ino1=1;
    }
    if(ino2==0)
    {
        ino2=1;
    }
    if(ino3==0)
    {
        ino3=1;
    }

    iret=(ino1*ino2*ino3);
    return iret;
}

int main()
{
    int i=0,j=0,k=0,imult=0;

    printf("enter three numbers:");
    scanf("%d %d %d",&i,&j,&k);

    imult=multiply(i,j,k);

    printf("%d",imult);

    return 0;
}