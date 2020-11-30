#include<stdio.h>
/*
void DisplayR()
{
	static int i=1;   //static storage class 
	
	if(i<=4)
	{
		printf("Hello\n");
		i++;
		DisplayR();         //recursive function
	}
}
*/

void DisplayI(int no)
{
	while(no>0)
	{
		printf("%d\n",no);
		no--;
	}
}

void DisplayRNo(int no)
{
	if(no>=1)
	{
		printf("%d\t",no);
		no--;
		DisplayRNo(no);         //recursive function
	}
}

int main()
{
	int value=0;
	printf("Enter number :");
	scanf("%d",&value);
	
	DisplayI(value);
	
	DisplayRNo(value);
	
	printf("\n");
	printf("End of main\n");
	
	return 0;
}