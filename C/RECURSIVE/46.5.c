#include<stdio.h>

int Display(int No)
{
	int iDigit=0,iMult=1;
	
    while(No!=0)
    {
		iDigit=No%10;
		iMult=iDigit * iMult;
        No=No/10;
        Display(No);
    }
	return iMult;
}

int main()
{
	int No=0,iret=0;
	
	printf("Enter Number : \n");
	scanf("%d",&No);
	
    iret=Display(No);
	printf("Multiplication of digit is :%d",iret);
	
    return 0;
}