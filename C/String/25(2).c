#include<stdio.h>
typedef int bool;
#define TRUE 1
#define FALSE 0

bool CAPITAL(char ch1)
{
	if(ch1>='A' && ch1<='Z')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	bool bret=FALSE;
	char ch='\0';
	
	printf("Enter character :\n");
	scanf("%c",&ch);
	
	bret=CAPITAL(ch);
	
	if(bret==TRUE)
	{
		printf("It is CAPITAL character");
	}
	else
	{
		printf("It is not CAPITAL character");
	}
	
	return 0;
}
