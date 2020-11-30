#include<stdio.h>

void FirstFive(int ivalue)
{
    int ino1=0,imult=0;

    for(ino1=1;ino1<=5;ino1++)
    {
        imult=ino1 * ivalue;
        printf("%d\t",imult);
    }
}
int main()
{
    int ino=0;
    
    printf("Enter number :\n");
    scanf("%d",&ino);

    FirstFive(ino);

    return 0;
}