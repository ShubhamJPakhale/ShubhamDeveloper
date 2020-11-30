#include<stdio.h>

int TouristBill(int ikm)
{
	int total=0;
	int val=0;
	
	if(ikm <= 100)
	{
		total=ikm*25;
	}
	else 
	{
		val=(ikm-100);
		total=(100*25)+(val*15);
	}
	
	return total;
}

int main()
{
	int ino1=0;
	
	printf("Enter number of km travel : \n");
	scanf("%d",&ino1);
	
	int iret=TouristBill(ino1);
	
	printf("Amount to be paid as a fare is %d",iret);
	
	return 0;
}