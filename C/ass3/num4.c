#include<stdio.h>

void Table(int ivalue)
{
    int ino1=0;

    for(ino1= -ivalue;ino1<=ivalue;ino1++)
    {
        printf("%d\t",ino1);
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