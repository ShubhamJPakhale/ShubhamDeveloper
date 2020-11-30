#include<stdio.h>

void DisplayConvert(char cvalue)
{
    if(cvalue>='a' && cvalue <='z')
    {
        printf("%c",cvalue-32);
    }
    else if(cvalue>='A' && cvalue<='Z')
    {
        printf("%c",cvalue+32);
    }
}
int main()
{
    char ch='\0';
    printf("Enter chracter\n");
    scanf("%c",&ch);
    
    DisplayConvert(ch);

    return 0;
}