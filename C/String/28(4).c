#include<stdio.h>

void strlwrX(char *str)
{
	if(str==NULL)
    {
        return ;
    }
    while (*str!='\0')
    {
        if( (*str>='0') && (*str<='9') )
        {    
            printf("%c",*str);
        }
        *str++;
    }
}

int main()
{
	char ch[30];
	
	printf("enter character:\n");
	scanf("%[^'\n']s",&ch);
	
	printf("\n");
	
	strlwrX(ch);
	
	return 0;
}