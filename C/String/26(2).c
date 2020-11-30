#include<stdio.h>

void displayASCII(char ch2)
{
	if(ch2>='a' && ch2<='z')
	{
		printf("%c",ch2-32);
	}
	else if(ch2>='A' && ch2<='Z')
	{
		printf("%c",ch2+32);
	}
	else
	{
		printf("%c",ch2);
	}
}
int main()
{
	char ch='\0';
	printf("enter character:\n");
	scanf("%c",&ch);
	
	displayASCII(ch);
	
	return 0;
}