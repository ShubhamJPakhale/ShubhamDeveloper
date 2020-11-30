#include<stdio.h>

void pattern(int irow,int icol)
{
    char ch='A';
    char ch1='a';
    int val=(int) ch;
    int val1=(int) ch1;

    for(int i=1;i<=irow;i++)
    {
        for(int j=1;j<=icol;j++)    //decrement of numbers 
        {
            if((i%2 )!=0)
            {
                int val2=(val-1)+j;
                printf("%c\t",val2);
            }
            else
            {
                int val3=(val1-1)+j;
                printf("%c\t",val3);
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