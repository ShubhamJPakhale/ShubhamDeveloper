#include<stdio.h>

int NonFact(int ivalue)
{
    int ino1=0,isum=0,isum2=0,idiff=0;
    for(ino1=1;ino1<ivalue;ino1++)
    {
        if(ivalue%ino1 !=0)
        {
            isum=isum +ino1;
        }
        else
        {
            isum2=isum2+ino1;
        }
    }
    idiff=isum2-isum;
    printf("%d",idiff);
}
int main()
{
    int ino=0;
    
    printf("Enter number:\n");
    scanf("%d",&ino);

    NonFact(ino);

    return 0;
}