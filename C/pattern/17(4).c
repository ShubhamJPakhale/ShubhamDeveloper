#include<stdio.h>

void Diagonal(int irow,int icol)
{
    for(int i=1;i<=irow;i++)
    {
        for(int j=1;j<=icol;j++)
        {
            if((i>1 && i<irow) && (j>1 && j<icol))
            {
                printf("@\t");
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
    int ir=0,jc=0;

    printf("Enter number of rows :");
    scanf("%d",&ir);
    printf("Enter number of coloumns :");
    scanf("%d",&jc);

    Diagonal(ir,jc);

    return 0;
}
