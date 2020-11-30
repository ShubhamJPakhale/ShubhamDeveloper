#include<stdio.h>

void Display(int No)
{
	static int iDigit=0;
	
    if(No!=0)
    {
		iDigit=No%10;
		printf("%d",iDigit);
        No=No/10;
        Display(No);
    }
}

int main()
{
	int No=0;
	
	printf("Enter Number : \n");
	scanf("%d",&No);
	
	printf("reverse number of digit is :");
    Display(No);
	
    return 0;
}