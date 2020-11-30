#include<stdio.h>

void displayASCII(char ch2)
{
	for(char ch=ch2;((ch<='Z')||( ch<='z'));ch++)
	{
		if(ch>='a' && ch<='z')
		{
			printf("%c",ch);
		}
		else if(ch>='A' && ch<='Z')
		{
			printf("%c",ch);
			if(ch=='Z')
			{
				break;
			}
		}
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