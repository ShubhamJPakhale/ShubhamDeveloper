#include<stdio.h>

int Display(int No)
{
	int iDigit=0,isum=0;
	
    while(No!=0)
    {
		iDigit=No%10;
		isum=iDigit + isum;
        No=No/10;
        Display(No);
    }
	return isum;
}

int main()
{
	int No=0,iret=0;
	
	printf("Enter Number : \n");
	scanf("%d",&No);
	
    iret=Display(No);
	printf("sum of digit is :%d",iret);
	
    return 0;
}