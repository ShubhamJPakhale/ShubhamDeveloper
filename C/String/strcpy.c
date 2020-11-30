#include<stdio.h>

void strcpyX(char *str1,char *str2)
{
	int i=0,j=0;
	
	if(str1==NULL)
	{
		return -1;
	}
	
	while(str1[i] !='\0')
	{
		str2[j]=str1[i];
		j++;
		i++;
	}
	
	if(str2==-1)
	{
		return -1;
	}
	else
	{
		return str2;
	}
}

int main()
{
	char ch1[30];
	char ch2[30];
	
	printf("Enter string :\n");
	scanf("%s",&ch1);
	
	strcpyX(ch1,ch2);
	
	printf("Member of string 2 is %s",ch2);
	
	return 0;
}