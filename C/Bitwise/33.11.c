#include<stdio.h>
typedef int bool;
typedef unsigned int UINT;

UINT ToggleBit(UINT iNo,UINT iPos)
{
	UINT iMask=0X00000001;   
	UINT iResult=0;
	
	if((iPos<1 )|| (iPos>32))
	{
		return;
	}
	
	iMask= iMask << (iPos-1);

	iResult=iNo ^ iMask;     

	return iResult;
}
int main()
{
	UINT iNo=0,iPos=0;
	UINT iret=0;
	
	printf("Enter number :\n");
	scanf("%u",&iNo);
	
	printf("Enter bit number for searching on or off :\n");
	scanf("%u",&iPos);
	
	iret=ToggleBit(iNo,iPos);
	
	printf("Modified value %u",iret);
	
	return 0;
}
