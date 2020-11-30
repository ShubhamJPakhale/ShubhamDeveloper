#include<stdio.h>
typedef int bool;
typedef unsigned int UNIT;
#define TRUE 1
#define FALSE 0

UNIT Toggle(UNIT iNo)
{
	UNIT iMask=0xf000000f;
	UNIT iResult=0;
	
	iResult=iNo ^ iMask;
	
	return iResult;
	
}

int main()
{
	UNIT iNo=0,iret=0;
	
	printf("enter number : \n");
	scanf("%u",&iNo);

	iret=Toggle(iNo);
	
	printf("Modified value is :%u \n",iret);
	
	
	return 0;
}