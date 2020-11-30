#include<stdio.h>

int displaynoofdigit(int iNo)
{
    int iCnt = 0;                           
    int iDigit = 0;                        
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit>2 && iDigit<8)
        {

            iCnt++;
        }
        iNo = iNo / 10;
    }
    
    return iCnt;
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