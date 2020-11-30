#include<stdio.h>
typedef int bool;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0

bool ChkBit(UINT iNo,int iPos1,int iPos2)
{
	UINT iMask=0X00000001;   
	UINT iResult1=0,iResult2=0;
	
	if((iPos1<1 || iPos1>32) || (iPos2<1 || iPos2>32))
	{
		return ;
	}
	
	UINT iMask1=iMask << (iPos1-1);
	UINT iMask2=iMask << (iPos2-1);

	iResult1=iNo & iMask1;
    iResult2=iNo & iMask2;

	if((iResult1 == iMask1)|| (iResult2 == iMask2))
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
	int iPos1=0,iPos2=0;
	
	printf("Enter number :\n");
	scanf("%u",&iNo);
	
	printf("Enter two number for finding status of bit  :\n");
	scanf("%d %d",&iPos1,&iPos2);
	
	bret=ChkBit(iNo,iPos1,iPos2);
	
	if(bret==TRUE)
	{
		printf("(TRUE) Bit at number is ON\n");
	}
	else
	{
		printf("(FALSE) Bit at Number is OFF\n");
	}
	
	return 0;
}
