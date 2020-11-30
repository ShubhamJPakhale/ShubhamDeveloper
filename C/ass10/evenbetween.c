#include<stdio.h>

int Nobetween(int ino1,int ino2)
{
    int irev=0,isum=0;

    if(ino1 > ino2)
    {
        printf("Invalid range\n");
    }

    for(irev=ino1;irev<=ino2;irev++)
    {
        if((irev%2) ==0)
        {
            isum=irev + isum;
            printf("%d\t",irev);
        }
    }
    printf("\nAddition of even number is %d\n",isum);
}

int main()
{
    int ivalue1=0,ivalue2=0,iret=0;

    printf("Enter two numbers :\n");
    scanf("%d %d",&ivalue1,&ivalue2);

    Nobetween(ivalue1,ivalue2);

    return 0;
}