#include<stdio.h>

void pattern(int irow,int icol)
{
    for(int i=1;i<=irow;i++)
    {
        for(int j=icol;j>0;j--)
        {
            if(i==j)
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

    printf("Enter no of rows and columns :");
    scanf("%d %d",&ino1,&ino2);

    pattern(ino1,ino2);

    return 0;
}