#include<stdio.h>

void StrMix(char str[],char Des[])
{
    int i=0,j=0;

    if(str==NULL || Des==NULL)
    {
        return;
    }

    while(str[i] !='\0')
    {
        Des[j]=str[i];
        if((str[i]>='a') && (str[i]<='z'))
        {
           Des[j]=str[i]-32;
        }
        else if((str[i]>='A') && (str[i]<='Z'))
        {
            Des[j]=str[i]+32;
        }
        i++;
        j++;
    }
    Des[j]='\0';
}
/*
void StrSmall(char str[],char Des[])
{
    int i=0,j=0;

    if(str==NULL || Des==NULL)
    {
        return;
    }

    while(str[i] !='\0')
    {
        Des[j]=str[i];
        if((str[i]>='A') && (str[i]<='Z'))
        {
           Des[j]=str[i]+32;
        }
        i++;
        j++;
    }
    Des[j]='\0';
}
*/
/*
void StrCapital(char str[],char Des[])
{
    int i=0,j=0;

    if(str==NULL || Des==NULL)
    {
        return;
    }

    while(str[i] !='\0')
    {
        Des[j]=str[i];
        if((str[i]>='a') && (str[i]<='z'))
        {
           Des[j]=str[i]-32;
        }
        i++;
        j++;
    }
    Des[j]='\0';
}
*/
/*
void StrNoSpaceCapital(char str[],char Des[])
{
    int i=0,j=0;

    if(str==NULL || Des==NULL)
    {
        return;
    }

    while(str[i] !='\0')
    {
        Des[j]=str[i];
        if(str[i] ==' ')
        {
            i++;
            Des[j]=str[i];
        }
        if((str[i]>='a') && (str[i]<='z'))
        {
           Des[j]=str[i]-32;
        }
        i++;
        j++;
    }
    Des[j]='\0';
}
*/

int main()
{
    char arr[30]={'\0'};
    char brr[30]={'\0'};

    printf("Enter string :\n");
    scanf("%[^'\n']s",arr);

    //StrNoSpaceCapital(arr,brr);

    //StrCapital(arr,brr);

    //StrSmall(arr,brr);
 
    StrMix(arr,brr);

    printf("String with no space and capital letter :\n%s",brr);

    return 0;
}