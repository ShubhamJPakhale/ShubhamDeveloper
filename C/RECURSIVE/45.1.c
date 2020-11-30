#include<stdio.h>

void Display(int No)
{
    if(No)
    {
        printf("*\t",No);
        No--;
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