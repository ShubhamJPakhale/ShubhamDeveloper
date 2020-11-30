#include<stdio.h>

int NonFact(int ivalue)
{
    int ino1=0;
    int isum=0;
    for(ino1=1;ino1<ivalue;ino1++)
    {
        if(ivalue%ino1 !=0)
        {
            isum=isum +ino1;
        }
    }
    printf("%d",isum);
}
int main()
{
    int ino=0;
    
    printf("Enter number:\n");
    scanf("%d",&ino);

    NonFact(ino);

    return 0;
}