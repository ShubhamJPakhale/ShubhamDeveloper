#include<stdio.h>
typedef int bool;
#define TRUE 1
#define FALSE 0

bool chkspecial(char ch2)
{
	if((ch2>=34 )&&( ch2<=64))
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
	char ch='\0';
	bool bret=FALSE;
	
	printf("enter character:\n");
	scanf("%c",&ch);
	
	bret =chkspecial(ch);
	
	if(bret==TRUE)
	{
		printf("It is special character");
	}
	else
	{
		printf("It is not special character");
	}
	
	return 0;
}