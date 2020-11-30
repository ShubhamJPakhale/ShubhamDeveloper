#include<stdio.h>
typedef int bool;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0

bool ChkBit(UINT iNo)
{
	UINT iMask1=0X00000100;   
	UINT iMask2=0X00000800; 
	UINT iResult1=0,iResult2=0;

	iResult1=iNo & iMask1; 
    iResult2=iNo & iMask2; 

	if((iResult1 == iMask1)|| (iResult2 == iMask2))
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
	UINT iNo=0;
	bool bret=FALSE;
	
	printf("Enter number :\n");
	scanf("%u",&iNo);
	
	bret=ChkBit(iNo);
	
	if(bret==TRUE)
	{
		printf("(TRUE) Bit at number is ON\n");
	}
	else
	{
		printf("(FALSE) Bit at Number is OFF\n");
	}
	
	return 0;
}
