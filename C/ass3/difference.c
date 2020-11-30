#include<stdio.h>

int diffofnum(int iNo)
{
    int esum = 0; 
    int osum=0;         
    int diff=0;                
    int iDigit = 0;                        
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if((iDigit %2)==0)
        {
            esum=esum +iDigit;
        }
        else
        {
            osum= osum + iDigit;
        }
        iNo = iNo / 10;
    }
    diff=esum-osum;
    
    return diff;
}

int main()
{
    int ino1=0,irest1=0;

    printf("enter number:");
    scanf("%d",&ino1);

    irest1=diffofnum(ino1);

    printf("%d",irest1);

    return 0;
}