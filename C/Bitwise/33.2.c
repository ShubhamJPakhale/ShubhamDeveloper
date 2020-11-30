#include<stdio.h>
typedef int bool;
typedef unsigned int UINT;

UINT ToggleBit(UINT iNo,UINT iPos1,UINT iPos2)
{
	UINT iMask=0X0000001;   
	UINT iResult=0;
	
	if(((iPos1<1 )|| (iPos1>32)) || ((iPos2<1 )|| (iPos2>32)))
	{
		return;
	}
	
	UINT iMask1= iMask << (iPos1-1);
	UINT iMask2= iMask << (iPos2-1);
	iMask= iMask1 ^ iMask2;
	
	iResult=iNo ^ iMask;     

	return iResult;
}
int main()
{
	UINT iNo=0,iPos1=0,iPos2=0;
	UINT iret=0;
	
	printf("Enter number :\n");
	scanf("%u",&iNo);
	
	printf("Enter bit number for searching on or off :\n");
	scanf("%u %u",&iPos1,&iPos2);
	
	iret=ToggleBit(iNo,iPos1,iPos2);
	
	printf("Modified value %u",iret);
	
	return 0;
}
