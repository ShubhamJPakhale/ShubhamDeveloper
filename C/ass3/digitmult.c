#include<stdio.h>

int displaynoofdigit(int iNo)
{                          
    int iDigit = 0; 
    int irev=1;                       
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit !=0)
        {
            irev=irev*iDigit;
        }
        iNo = iNo / 10;
    }
    
    return irev;
}

int main()
{
    int ino1=0,irest1=0;

    printf("enter number:");
    scanf("%d",&ino1);

    irest1=displaynoofdigit(ino1);

    printf("%d",irest1);

    return 0;
}