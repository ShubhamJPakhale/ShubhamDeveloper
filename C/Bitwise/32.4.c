#include<stdio.h>
typedef int bool;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0

bool ChkBit(UINT iNo)
{
	//UINT iMask=0X000001c0;   //7 8 9     0000 0000 0000 0000 0000 0001 1100 0000     // Hexadecimal Number -> 0 to 9 and a to f
	UINT iMask=0X00000010;    // 1 32
	
	UINT iResult=0;
	
	iResult=iNo & iMask;
    printf("%d\n",iResult); 	

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
	UINT iNo=0;
	bool bret=FALSE;
	
	printf("Enter number :\n");
	scanf("%u",&iNo);
	
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
