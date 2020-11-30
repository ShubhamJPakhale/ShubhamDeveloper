#include<stdio.h>

int Search(char *str,char ch2)
{
	int i=0,icnt=0;
	
	while(str[i] !='\0')
	{
		if(str[i]==ch2)
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
	char ch1='\0';
	
	printf("enter character:\n");
	scanf("%[^'\n']s",&ch);
	
	printf("Enter character that you eant to serch in string is :");
	scanf(" %c",&ch1);
	
	int iret= Search(ch,ch1);
	
	if(iret>0)
	{
	   printf("[TRUE] Mumber of %c in string is %d",ch1,iret);
	}
	else
	{
	   printf("[FALSE]  There is NO Mumber of %c in string ",ch1);
	}

	
	return 0;
}