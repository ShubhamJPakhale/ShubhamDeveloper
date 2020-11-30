#include<stdio.h>
#include<string.h>
typedef int bool;
#define TRUE 1
#define FALSE 0

bool StrComp(char *str,char *des,int i)
{
    int l=0;

    if((*str !=NULL )||( *des !=NULL))
    {
        return -1;
    }

    while(i>0)
    {
        i--;
    }

    while((*str !='\0' )&& (*des !='\0') )
    {
        if(str[l] != des[l])
        {
            break;
        }
        l++;
        i--;
    }

    if(str[l] != des[l])
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
   
}

int main()
{
    char str[30];
    char des[30];
    bool bret=FALSE;
    int i=0;

    printf("Enter first string :\n");
    scanf("%[^'\n']s",&str);

    printf("Enter second string :\n");
    scanf(" %[^'\n']s",&des);

    printf("Enter number :\n");
    scanf("%d",&i);

    bret=StrComp(str,des,i);

    if(bret=TRUE)
    {
        printf("Both string are same\n");
    }
    else
    {
        printf("Both string are different\n");
    }

    return 0;
}