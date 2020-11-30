#include<stdio.h>
typedef int bool;
typedef unsigned int UINT;

UINT ChkBit(UINT iNo,int istart,int iend)
{
	UINT iMask=0X00000001; 
   
	if((istart<1 || istart>32) || (iend<1 || iend>32))
	{
		return ;
	}

	for(int i=0;i<(iend-istart);i++)
	{
		iMask=iMask << ((istart+i)-1);
		iNo=iMask ^ iNo;
	}
	return iNo;
}
int main()
{
	UINT iNo=0;
	int iret=0;
	int iPos1=0,iPos2=0;
	
	printf("Enter number :\n");
	scanf("%u",&iNo);
	
	printf("Enter two number for finding status of bit  :\n");
	scanf("%d %d",&iPos1,&iPos2);
	
	iret=ChkBit(iNo,iPos1,iPos2);
	
	printf("Number is %d\n",iret);
	
	return 0;
}
