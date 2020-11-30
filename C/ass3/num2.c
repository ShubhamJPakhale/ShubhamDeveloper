#include<stdio.h>

int Number(int ivalue)
{
    if(ivalue < 50)
    {
        printf("Number is small\n");
    }
    else if((ivalue >= 50) && (ivalue < 100))
    {
        printf("Number is Medium\n");
    }
    else
    {
        printf("Number is Large\n");
    }
}

int main()
{
    int ino=0;

    printf("Enter number:\n");
    scanf("%d",&ino);

    Number(ino);

    return 0;
}