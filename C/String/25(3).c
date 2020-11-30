#include<stdio.h>
typedef int bool;
#define TRUE 1
#define FALSE 0

bool chkdigit(char i)
{
	if((i>='0')&&(i<='9'))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
int main()
{
	char j='\0';
	bool bret=FALSE;
	
	printf("Enter number :\n");
	scanf("%c",&j);
	
	bret=chkdigit(j);
	
	if(bret==TRUE)
	{
		printf("It is Digit");
	}
	else
	{
		printf("It is not Digit");
	}
	
	return 0;
}