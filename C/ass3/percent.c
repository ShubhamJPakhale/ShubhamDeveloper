#include<stdio.h>

float percent(int ino1,int ino2)
{
    float fper=0.0;

    fper=(float)ino1/(int)ino2;
    fper=fper*100;
    
    return fper;
}

int main()
{
    int ivalue=0,ivalue2=0;
    float fret=0.0;

    printf("Enter obtained marks :");
    scanf("%d",&ivalue);

    printf("Enter total marks :");
    scanf("%d",&ivalue2);

    fret=percent(ivalue,ivalue2);

    printf("%0.2f percent",fret);

    return 0;
}