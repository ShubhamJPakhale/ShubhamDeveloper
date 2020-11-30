#include<stdio.h>

typedef int bool;
#define TRUE 1
#define FALSE 0

int check(int i)
{
    if((i%5) ==0 )
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int j=0;
    bool ret=FALSE;

    printf("Enter number");
    scanf("%d",&j);

    ret=check(j);
    
    if(ret==TRUE)
    {
        printf("Divisible by 5");
    }
    else{
        printf("Not Dividible by 5");
    }

    return 0;
}