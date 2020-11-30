#include<stdio.h>

int Display(int No)
{
	int Factorial=1;
	
    while(No!=0)
    {
		Factorial=No*Factorial;
		No--;
        Display(No);
    }
	return Factorial;
}

int main()
{
	int No=0,iret=0;
	
	printf("Enter Number : \n");
	scanf("%d",&No);
	
    iret=Display(No);
	printf("Factorial of digit is :%d",iret);
	
    return 0;
}