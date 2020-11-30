#include<stdio.h>

void strcpyX(char *str,char *Des)
{
    int i=0;
    if(str==NULL || Des==NULL)
    {
        return;
    }

    while(*str !='\0')
    {
        *Des=*str;
        str++;
        Des++;
    }
    *Des='\0';
}
int main()
{
    char arr[30]={'\0'};
    char brr[30]={'\0'};

    printf("Enter string :\n");
    scanf("%[^'\n']s",arr);

    strcpyX(arr,brr);

    printf("Copy of string in another string :\n%s",brr);

    return 0;
}