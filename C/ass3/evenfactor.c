#include<stdio.h>

void displayfactor(int ivalue)
{
    int i=0;
    int ino=0;
    if(ino<=0)
    {
        ino=-ino;
    }
    for(i=1;i<=ivalue/2;i++)
    {
        if((ivalue%i==0 && i%2==0) ||(i==1))
        {
            printf("%d\t",i);
        }
    }
}
int main()
{
    int ino=0;
    
    printf("enter number\n");
    scanf("%d",&ino);

    displayfactor(ino);

    return 0;
}