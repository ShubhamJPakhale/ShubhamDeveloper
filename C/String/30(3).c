#include<stdio.h>

void strcpyXX(char *str1,char *str2)
{
	if(*str1==NULL)
	{
		return -1;
	}
	
	while(*str1 !='\0')
	{
		if((*str1>='a') &&( *str1<='z'))    //		if((*str1>='A') &&( *str1<='Z'))
		{
		    *str2=*str1;
		    str2++;
		}
		str1++;
	}
	
	return str2;
}

int main()
{
	char arr[30];
	char brr[30];
	
	printf("Enter string :\n");
	scanf("%[^'\n']s",&arr);
	
	strcpyXX(arr,brr);
	
	printf("Capital letters in string are %s",brr);
	
	return 0;
}