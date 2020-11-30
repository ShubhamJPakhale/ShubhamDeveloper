#include<stdio.h>

float CalculateTaxAmount(int ivalue)
{
	float total=0;
	float val=0;
	
	if(ivalue < 500000)
	{
		total=0;
	}
	else if(ivalue>=500000 && ivalue<1000000)
	{
		val=(ivalue-500000);
		total=((val*10)/100);
	}
	else if(ivalue>=1000000 && ivalue<2000000)
	{
		val=(ivalue-1000000);
		total=50000+((val*20)/100);
	}
	else
	{
		val=(ivalue-2000000);
		total=250000+((val*30)/100);
	}
	return total;
}

int main()
{
	int ino1=0;
	
	printf("Enter gross net income : \n");
	scanf("%d",&ino1);
	
	float fret=CalculateTaxAmount(ino1);
	
	printf("Amount to be paid as a tax is %.2f",fret);
	
	return 0;
}