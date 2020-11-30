#include<stdio.h>
#include<conio.h>
int main()
{
int a=0;
printf("Enter year= ");
scanf("%d",&a);
if((a%400==0) ||(a%100!=0 && a%4==0))
{
	printf("this is leap year");
}
else
{
	printf("this is not leap year");
}
return 0;
}
