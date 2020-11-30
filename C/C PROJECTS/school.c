#include<stdio.h>

int SchoolFees(int istandard)
{
	switch(istandard)
	{
		case 1:
		printf("8900");
		break;
		
		case 2:
		printf("12790");
		break;
		
		case 3:
		printf("21000");
		break;
		
		case 4:
		printf("23450");
		break;
		
		default :
		printf("wrong input");
	};
	
}

int main()
{
	int ino1=0;
	
	printf("Enter class standard : \n");
	scanf("%d",&ino1);
	
	SchoolFees(ino1);
	
	return 0;
}