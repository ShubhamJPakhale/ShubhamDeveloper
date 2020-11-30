#include<stdio.h>

void strcpyXX(char *str1,char *str2)
{
	if(*str1==NULL || *str2 ==NULL)
	{
		return -1;
	}
	/*
	int i=0, j=0;
    i = strlen(s1);

    for (j = 0; s2[j] != '\0'; i++, j++)
    {
        s1[i] = s2[j];
    }
	*/
	while(*str1 !='\0')
	{
		*str1=*str1;
		str1++;
		
		if(*str1 ='\0')
		{
			*str1=" ";
			str1++;
		}
		str1++;
	}
	
	while(*str2 !='\0')
	{
		*str1=*str2;
		str1++;
		str2++;
	}
	*str2 ='\0';
}

int main()
{
	char arr[30];
	char brr[30];

	printf("Enter first string :\n");
	scanf("%[^'\n']s",&arr);
	
	printf("Enter second string :\n");
	scanf(" %[^'\n']s",&brr);

	strcpyXX(arr,brr);
	
	printf("Capital letters in string are %s",arr);
	
	return 0;
}