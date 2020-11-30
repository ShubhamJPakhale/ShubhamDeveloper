#include<stdio.h>

typedef int BOOL;
# define TRUE 1
#define FALSE 0

BOOL CheckBit(int iNo,int ino)
{
	int iRem=0;
	int icnt=1;  
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo !=0)
	{
		iRem=iNo%2;
		//iRem++; 
		if(icnt ==ino)
		{
			break;
		}
		icnt++;
		iNo=iNo/2;
	}
	
	if((icnt==ino) && (iRem ==1))
	{
		return TRUE;
	}
	else 
	{
		return FALSE;
	}
	
}
int main()
{
    int iNo = 0,iNo1=0;
    BOOL bRet = FALSE;
    
    printf("Enter number\n");
    scanf("%d",&iNo);
	
    printf("Enter number\n");
    scanf("%d",&iNo1);
	    
    bRet = CheckBit(iNo,iNo1); 
    if(bRet == TRUE)
    {
        printf("Fourth bit is on\n");
    }
    else
    {
        printf("Fourth bit is Off\n");
    }
    return 0;
}