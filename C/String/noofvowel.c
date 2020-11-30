#include<stdio.h>

int checkvowel(char str[])
{
	int i=0,icnt=0;
	while(str[i] !='\0')
	{
		if((str[i]=='a') ||(str[i]== 'e' )||(str[i]== 'i')||(str[i]=='o')||(str[i]=='u') ||(str[i]=='A')||(str[i]=='E')||(str[i]=='I')||(str[i]=='O')||(str[i]=='U'))
		{
			icnt++;
		}
		i++;
	}	
	return icnt;
}

int main()
{
	char ch[30];
	int iret=0;
	
	printf("Enter string :\n");
	scanf("%[^’\n’]s",&ch);
	
	iret=checkvowel(ch);
	printf("number of vowels in string is %d",iret);
	
	return 0;
	
}
