#include<stdio.h>
#include<string.h>

typedef int bool;
#define TRUE 1
#define FALSE 0

bool checkvowel(char str[])
{
	int i=0,icnt=0;
	while(str[i] !='\0')
	{
		if((str[i]=='a') ||(str[i]== 'e' )||(str[i]== 'i')||(str[i]=='o')||(str[i]=='u') ||(str[i]=='A')||(str[i]=='E')||(str[i]=='I')||(str[i]=='O')||(str[i]=='U'))
		{
			return TRUE;
		}
		i++;
	}	
}

int main()
{
	char ch[30];
	bool bret=FALSE;
	
	printf("Enter string :\n");
	scanf("%[^’\n’]s",&ch);
	
	bret=checkvowel(ch);
	
	if(bret==TRUE)
	{
		printf("vowels present in string");
	}
	else
	{
		printf("vowels not present in string");
	}
	
	return 0;
	
}
