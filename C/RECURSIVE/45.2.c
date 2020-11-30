#include<stdio.h>

void Display(int No)
{
	static int iNo=1;
	
    while(iNo<=No)
    {
        printf("%d\t",iNo);
        iNo++;
        Display(No);
    }
}

int main()
{
	int No=0;
	
	printf("Enter Number : \n");
	scanf("%d",&No);
	
    Display(No);

    return 0;
}