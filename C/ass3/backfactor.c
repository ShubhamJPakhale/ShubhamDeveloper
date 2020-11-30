#include<stdio.h>

int Factrev(int ivalue)
{
    int i=0;
    for(i=ivalue/2;i>0;i--)
    {
        if(ivalue%i==0)
        {
            printf("%d\t",i);
        }
    }

}

int main()
{
    int ino=0;
    int iret=0;

    printf("Enter number:\n");
    scanf("%d",&ino);

    iret=Factrev(ino);

    return 0;
}