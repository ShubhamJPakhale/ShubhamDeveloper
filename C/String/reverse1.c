#include<stdio.h>

void strcpyX(char *str)
{
    int istart=0,iEnd=0;
    char temp;

    if(str==NULL)
    {
        return;
    }

    while(str[iEnd] !='\0')
    {
        iEnd++;
    }
    iEnd--;

    while(istart <= iEnd)
    {
        temp=str[istart];
        str[istart]=str[iEnd];
        str[iEnd]=temp;
    
        istart++;
        iEnd--;
    }
    temp='\0';
}
int main()
{
    char arr[30]={'\0'};

    printf("Enter string :\n");
    scanf("%[^'\n']s",arr);

    strcpyX(arr);

    printf("reverse string in another string :\n%s",arr);

    return 0;
}