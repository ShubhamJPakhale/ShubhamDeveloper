#include<stdio.h>
#include<string.h>

void StrCatN(char *str,char *des,int j)
{
    if((*str !=NULL )||( *des !=NULL))
    {
        return -1;
    }

    int l=0,k=0;

    while(*str !='\0')
    {
        str[l]=str[l];
		l++;
		
		if(str[l] ='\0')
		{
			str[l]=" ";
			l++;
		}
		l++;
    }

    while((*des !='\0') && (j !=0))
    {
       for(int k=0;k<j;k++)
       {
            str[l]=des[k];
            l++;
       }
    }
    str[l]='\0';
}

int main()
{
    char str[30];
    char des[30];
    int i=0;

    printf("Enter first string :\n");
    scanf("%[^'\n']s",&str);

    printf("Enter second string :\n");
    scanf(" %[^'\n']s",&des);

    printf("Enter number of character from second string :\n");
    scanf("%d",&i);

    StrCatN(str,des,i);

    printf("strimg concat is :%s\n",str);
    
    return 0;
}