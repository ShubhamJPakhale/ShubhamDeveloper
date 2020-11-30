#include<stdio.h>
typedef int bool;
typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
	UINT iMask=0X0000000f;   
	UINT iResult=0;
	
	iResult=iNo | iMask;     

	return iResult;
}
int main()
{
	UINT iNo=0;
	UINT iret=0;
	
	printf("Enter number :\n");
	scanf("%u",&iNo);
	
	iret=ToggleBit(iNo);
	
	printf("Modified value %u",iret);
	
	return 0;
}
