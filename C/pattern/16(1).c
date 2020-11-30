#include<stdio.h>

int pattern(int irow,int icol)
{
	int icnt=0;
    for(int i=1;i<=irow;i++)
    {
        for(int j=1;j<=icol;j++)    //decrement of numbers 
        {
			if(icnt>=9)
			{
				icnt=0;
			}
			icnt=icnt+1;
			printf("%d\t",icnt);
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