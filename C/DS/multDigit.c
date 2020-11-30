#include<stdio.h>

void LargeDigit(int b)
{
	int no=0,iDigit=0;
	
	while(b !=0)
	{
		iDigit=b%10;
		if(iDigit>no)
		{
			no=iDigit;
		}
		b=b/10;
	}
	printf("%d",no);
}

int main()
{
	int a=0;
	printf("Enter number:");
	scanf("%d",&a);
	
	LargeDigit(a);
	
	return 0;
}