#include<stdio.h>

void Tablerev(int ivalue)
{
    int irev=0,imult=0;
    if(ivalue<0)
    {
        ivalue=-ivalue;
    }

    for(irev=10;irev>0;irev--)
    {
        imult=irev * ivalue;
        printf("%d\t",imult);
    }
}
int main()
{
    int ino=0;

    printf("Enter number :\n");
    scanf("%d",&ino);

    Tablerev(ino);

    return 0;
}