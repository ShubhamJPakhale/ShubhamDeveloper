#include<stdio.h>
typedef int bool;
#define TRUE 1
#define FALSE 0

bool ChkBit(int iNo)
{
	int iMask=0X00001000;   //alter the value by 1,2,4,8 for finding number of that bit in number binary...8*4=32 bit
	//ex.if we write 0X00001000 then we check 13th bit for checking number is on or off...
	
	int iResult=0;
	if(iNo<0)
	{
		iNo= -iNo;
	}
	
	iResult=iNo & iMask;     //it and(& operator) in the number binary 
	
	/*
	values   &   |   ^
	0 0      0   0   0
	1 0      0   1   1
	0 1      0   1   1
	1 1      1   1   0
	*/

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
	int iNo=0;
	bool bret=FALSE;
	
	printf("Enter number :\n");
	scanf("%d",&iNo);
	
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
