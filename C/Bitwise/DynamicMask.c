#include<stdio.h>
typedef int bool;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0

bool ChkBit(UINT iNo,UINT iPos)
{
	UINT iMask=0X00000001;   
	UINT iResult=0;
	
	if((iPos<1 )|| (iPos>32))
	{
		return FALSE;
	}
	
	iMask= iMask << (iPos-1);

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
	UINT iNo=0,iPos=0;
	bool bret=FALSE;
	
	printf("Enter number :\n");
	scanf("%u",&iNo);
	
	printf("Enter bit number for searching on or off :\n");
	scanf("%u",&iPos);
	
	bret=ChkBit(iNo,iPos);
	
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
