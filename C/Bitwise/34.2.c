#include<stdio.h>
typedef int bool;
typedef unsigned int UNIT;
#define TRUE 1
#define FALSE 0

UNIT OffBit(UNIT iNo,UNIT ival)
{
	UNIT iMask=0x00000001;
	UNIT iResult=0;
	
	if((ival>32)|| (ival<1))
	{
		return ;
	}
	
	iMask=iMask<< (ival - 1);
	
	iResult=iNo ^ iMask;
	
	return iResult;
	
}

int main()
{
	UNIT iNo=0,ival=0,iret=0;
	
	printf("enter number : \n");
	scanf("%u",&iNo);
	
	printf("Bit number for checking :\n");
	scanf("%u",&ival);
	
	iret=OffBit(iNo,ival);
	
	printf("Modified value is :%u \n",iret);
	
	
	return 0;
}