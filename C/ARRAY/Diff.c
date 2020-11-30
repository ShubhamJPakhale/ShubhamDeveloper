#include<stdio.h>

int Difference(int i,int j)
{
	int sum1=0,sum2=0;

	for(int k=1;k<=j;k++)
	{
		if(k%i==0)
		{
			sum1=sum1+k;
		}
		else
		{
			sum2=sum2+k;
		}
	}

	int diff=sum1-sum2;

	if(diff<0)
	{
		diff=-(diff);
	}

	return diff;
}

int main()
{
	int a=0,b=0;

	printf("Enter first number for checking for divisibity : ");
	scanf("%d",&a);
	printf("Enter second number for range : ");
	scanf("%d",&b);

	int no=Difference(a,b);
	printf("Difference between divible by a number and other number between number is %d\n",no);

	return 0;
}