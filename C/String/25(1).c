#include<stdio.h>
typedef int bool;
#define TRUE 1
#define FALSE 0

bool Search(char ch1)
{
	if((ch1>='a' && ch1<='z') || (ch1>='A' && ch1<='Z'))
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
	
	bret=Search(ch);
	
	if(bret==TRUE)
	{
		printf("It is character");
	}
	else
	{
		printf("It is not character");
	}
	
	return 0;
}
