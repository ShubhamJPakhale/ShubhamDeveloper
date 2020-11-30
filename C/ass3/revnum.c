#include<stdio.h>

int revnum(int ino)
{
    int idigit=0;
    if(ino <0)
    {
        ino =-ino;
    }
    while(ino !=0)
    {
        idigit=ino%10;
        printf("%d",idigit);
        ino=ino/10;
    }
}
int main()
{
    int ivalue=0;

    printf("Enter number:");
    scanf("%d",&ivalue);

    revnum(ivalue);

    return 0;
}