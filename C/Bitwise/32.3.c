#include<stdio.h>
typedef int bool;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0

bool ChkBit(UINT iNo)
{
	UINT iMask=0X08104040;   //7 15 21 28
	UINT iResult=0;
	
	iResult=iNo & iMask;     

	if(iResult == iMask)
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
		printf("Bit at number is ON\n");
	}
	else
	{
		printf("Bit at Number is OFF\n");
	}
	
	return 0;
}
