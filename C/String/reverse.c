#include<stdio.h>

void ReverseString(char str[])
{
	int iEnd=0,iStart=0;
	char temp;
	
	while(str[iEnd] !='\0')
	{
		iEnd++;
	}
	iEnd--;
	
    while(iStart<iEnd)
	{
		temp=str[iStart];
		str[iStart]=str[iEnd];
		str[iEnd]=temp;
		
		iStart++;
		iEnd--;
	}	
}

int main()
{
	char ch[30];
	
	printf("Enter string :\n");
	scanf("%[^'\n']s",&ch);
	
	ReverseString(ch);
	
	printf("reverse string of entered string is :%s \n",ch);
	
	return 0;
	
}
