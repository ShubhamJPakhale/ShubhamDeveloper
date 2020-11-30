#include<stdio.h>

void strlwr(char *str)
{
	int i=0;
	while(str[i] !='\0')
	{
	    
		if((str[i]>='a' )&&( str[i]<='z'))
	    {
	    	str[i]-=32;
     	}
		else if((str[i]>='A' )&&( str[i]<='Z'))
		{
			str[i]+=32;
		}
		/*if((str[i]>='a' )&&( str[i]<='z'))
	    {
	    	str[i]-=32;
			continue;
     	}
		*/
		/*if((str[i]>='A' )&&( str[i]<='Z'))
	    {
	    	str[i]+=32;
			continue;
     	}
		*/
		i++;
	}
}

int main()
{
	char ch[30];
	
	printf("enter character:\n");
	scanf("%[^'\n']s",&ch);
	
	strlwr(ch);
	
	printf("modified string is %s",ch);
	
	return 0;
}