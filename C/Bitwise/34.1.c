#include<stdio.h>
typedef int bool;
typedef unsigned int UNIT;
#define TRUE 1
#define FALSE 0

bool ChkBit(UNIT iNo,UNIT ival)
{
	UNIT iMask=0x00000001;
	UNIT iResult=0;
	
	if((ival>32)|| (ival<1))
	{
		return ;
	}
	
	iMask=iMask<< (ival - 1);
	
	iResult=iNo & iMask;
	
	if(iResult== iMask)
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
	UNIT iNo=0,ival=0;
	bool bret=FALSE;
	
	printf("enter number : \n");
	scanf("%u",&iNo);
	
	printf("Bit number for checking :\n");
	scanf("%u",&ival);
	
	bret=ChkBit(iNo,ival);
	
	if(bret==TRUE)
	{
		printf("Bit is ON\n");
	}
	else
	{
		printf("Bit is OFF\n");
	}
	
	return 0;
}