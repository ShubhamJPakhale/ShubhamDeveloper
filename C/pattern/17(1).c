#include<stdio.h>

void pattern(int irow,int icol)
{
    for(int i=1;i<=irow;i++)
    {
        for(int j=1;j<=icol;j++)
        {
            if(j>i)
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}
int main()
{
    int ino1=0,ino2=0;

    printf("Enter number of rows :");
    scanf("%d",&ino1);

    printf("Enter number of columns :");
    scanf("%d",&ino2);

    pattern(ino1,ino2);

    return 0;
}