#include<stdio.h>
#include<string.h>

int Strlen(char *str)
{
	int i=0,count=0;
	while(str[i]!='\0')
	{
		if(str[i]>='a' && str[i]<='z')
        {
	       count++;
	    }
		str++;
		Strlen(str);
		
    }
	return count;
}

int main()
{
	int iret=0;
	char str[100];
	
	printf("Enter Number : \n");
	scanf("%[^'\n']s",&str);
	
    iret=Strlen(str);
	
	printf("no of white spaces in string are :%d",iret);
	
    return 0;
}