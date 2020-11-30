#include<stdio.h>
#include<stdlib.h>   //for fflush function

int frequency(char str[],char ch3)
{
	int i=0,icnt=0;
	
	if(str==NULL)
	{
		return -1;
	}
	
	while(str[i] !='\0')
	{
		if(str[i]==ch3)
		{
			icnt++;
		}
		i++;
	}	
	/*
	
	for(i=0;str[i] !='\0';i++)
	{
		if(str[i]==ch3)
		{
			icnt++;
		}
	}
	*/
	
	/*
	while(*str !='\0')
	{
		if(str[i]==ch3)
		{
			icnt++;
		}
		str++;
	*/
	
	return icnt;
}

int main()
{
	char ch[30],ch1;
	
	printf("Enter string :\n");
	scanf("%[^’\n’]s",&ch);
	
	//fflush(STDIN);           //for taking two consecutive input 
	
	printf("Enter characte that we want to search in array :\n");
	scanf(" %c",&ch1);       //take whitespace before %c for talking two consecutive input in c
	
	int iret=frequency(ch,ch1);
	
	printf("number of %c in string is %d",ch1,iret);
	
	return 0;
	
}
