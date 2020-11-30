#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL chkVowel(char ch)
{
    if(ch=='a'||ch=='e' ||ch=='i' ||ch=='o'||ch=='u'||ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'||ch=='U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cvalue='\0';
    BOOL bret=FALSE;

    printf("Enter character\n");
    scanf("%c",&cvalue);
    
    bret= chkVowel(cvalue);

    if(bret==TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }

    return 0;
}