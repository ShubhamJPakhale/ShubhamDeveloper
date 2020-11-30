#include<stdio.h>

int powerI(int i,int j)
{
	int result=1;
	
	while(j!=0)
	{
		result=result* i;
		j--;
	}
	return result;
}

int powerR(int i,int j)
{
	static int result=1;
	
	if(j!=0)
	{
		result=result* i;
		j--;
		powerR(i,j);
	}
	return result;
}

int main()
{
	int i=0,j=0,iret=0;
	
	printf("enter first number:");
	scanf("%d",&i);
	
	printf("enter second number:");
	scanf("%d",&j);
	
	iret=powerR(i,j);
	
	printf("Power of number is %d",iret);
	
	return 0;
}	