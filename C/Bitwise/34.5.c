#include<stdio.h>
typedef int bool;
typedef unsigned int UNIT;
#define TRUE 1
#define FALSE 0

UNIT OffBit(UNIT iNo,UNIT ival,UNIT ival1)
{
	UNIT iMask=0x00000001;
	UNIT iResult=0;
	
	if(((ival>32)|| (ival<1))||((ival1>32)|| (ival1<1)) )
	{
		return ;
	}
	
	UNIT iMask1=iMask<< (ival - 1);
	UNIT iMask2=iMask<< (ival1 - 1);
	iMask=iMask1 ^iMask2;
	
	iResult=iNo ^ iMask;
	
	return iResult;
	
}

int main()
{
	UNIT iNo=0,ival=0,ival1=0,iret=0;
	
	printf("enter number : \n");
	scanf("%u",&iNo);
	
	printf("Bit number for checking :\n");
	scanf("%u %u",&ival,&ival);
	
	iret=OffBit(iNo,ival,ival1);
	
	printf("Modified value is :%u \n",iret);
	
	
	return 0;
}