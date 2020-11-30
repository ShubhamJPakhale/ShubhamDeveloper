#include<stdio.h>

int SpaceCount(char *str)
{
	int i=0,icnt=0;
	while(str[i] !='\0')
	{
		if(str[i]==' ')
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
	
	printf("enter character:\n");
	scanf("%[^'\n']s",&ch);
	
	int iret=SpaceCount(ch);
	
	printf("Number of ehite spaces in string is %d",iret);
	
	return 0;
}