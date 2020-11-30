#include<stdio.h>

void OddNum(int ivalue)
{
    int ino1=0;

    for(ino1=0;ino1<=ivalue;ino1++)
    {
        if((ino1%2)!=0)
        {
            printf("%d\t",ino1);
        }
    }
}
int main()
{
    int ino=0;
    
    printf("Enter number :\n");
    scanf("%d",&ino);

    OddNum(ino);

    return 0;
}