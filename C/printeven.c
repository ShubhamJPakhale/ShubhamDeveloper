#include<stdio.h>

void printEven(int ivalue)
{
    int ino1=0;
    int ino2=0;

    if(ivalue <= 0)
    {
        return 0;
    }

    for(ino1=1;ino1<=ivalue;ino1++)
    {
        ino2=ino1*2;
        printf("%d\t",ino2);
    }
}

int main()
{
    int ino=0;

    printf("Enter number : \n");
    scanf("%d",&ino);
    
    printEven(ino);

    return 0;
}