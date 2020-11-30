#include<stdio.h>

void pattern(int irow,int icol)
{
    char ch='a';
    int val=(int) ch;

    for(int i=1;i<=irow;i++)
    {
        for(int j=1;j<=icol;j++)    //decrement of numbers 
        {
            if((i%2)!=0)
            {
                int val1=(val-1)+j;
                printf("%c\t",val1);
            }
            else
            {
                printf("%d\t",j);
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