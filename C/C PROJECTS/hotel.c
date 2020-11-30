#include<stdio.h>

float CalculateBill(int ivalue)
{
	float total=0;
	
	if(ivalue<500)
	{
		total=ivalue;
	}
	else if(ivalue>=500 && ivalue<1500)
	{
		total=ivalue -((ivalue *10)/100);
	}
	else
	{
		total=ivalue - ((ivalue*15)/100);
	}
	return total;
}

int main()
{
	int ino1=0;
	
	printf("Enter bill amount before discount : \n");
	scanf("%d",&ino1);
	
	float fret=CalculateBill(ino1);
	
	printf("Amount to be paid after discount is %.2f",fret);
	
	return 0;
}