#include<stdio.h>
typedef int bool;
#define TRUE 1
#define FALSE 0

bool check(char i)
{
	if((i>='a' && i<='z') )
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
	char j='\0';
	
	printf("Enter character :\n");
	scanf("%c",&j);
	
	bret=check(j);
	
	if(bret==TRUE)
	{
		printf("It is small letter character");
	}
	else
	{
		printf("It is not small letter character");
	}
	
	return 0;
}