#include<stdio.h>

void strNoSpace(char str[],char Des[])
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
        i++;
        j++;
    }
    Des[j]='\0';
}

int main()
{
    char arr[30]={'\0'};
    char brr[30]={'\0'};

    printf("Enter string :\n");
    scanf("%[^'\n']s",arr);

    strNoSpace(arr,brr);

    printf("Copy of string in another string :\n%s",brr);

    return 0;
}