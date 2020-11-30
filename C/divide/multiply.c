#include<stdio.h>
int multiply(int,int);

int multiply(int ino1,int ino2)
{
    int iAns=ino1 * ino2;

    return iAns;
}
int main()
{
    int ivalue1=0,ivalue2=0;
    int iret=0;
    
    printf("Enter number : \n");
    scanf("%d",&ivalue1);

    printf("Enter number : \n");
    scanf("%d",&ivalue2);

    iret=multiply(ivalue2,ivalue2);

    printf("multiplication is : %d",iret);

    return 0;
}