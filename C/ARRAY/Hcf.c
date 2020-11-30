#include<stdio.h>

int LCM(int a,int b)
{
	int max=(a>b)?a:b;
	
	while(1)
	{
		if(max%a==0 && max%b==0)
		{
			int lcm=max;
			return lcm;
			break;
		}
		++max;
	}
}

int Multiplication(int a,int b)
{
	int res=0;
	res=a*b;
	return res;
}

int HCF(int a,int b)
{
	int mul=Multiplication(a,b);
	int lcm=LCM(a,b);

	int hcf=mul/lcm;
	return hcf;
}

int main()
{
	int no1=0,no2=0;
	printf("Enter Number for finding hcf and lcm of number :\n");
	scanf("%d %d",&no1,&no2);

	int lcm=LCM(no1,no2);
	printf("Lcm of two number is %d\n",lcm);

	int hcf=HCF(no1,no2);
	printf("Hcf of two number is %d\n",hcf);

	return 0;
}