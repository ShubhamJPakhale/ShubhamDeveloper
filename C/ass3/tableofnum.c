#include<stdio.h>

void Table(int ivalue)
{
    int ino1=0,itable=0;

    if(ivalue<0)
    {
        ivalue = -ivalue;
    }

    for(ino1=1;ino1<=10;ino1++)
    {
        itable=ino1 * ivalue;
        printf("%d\t",itable);
    }
}
int main()
{
    int ino=0;
    
    printf("Enter number :\n");
    scanf("%d",&ino);

    Table(ino);

    return 0;
}