#include<stdio.h>
typedef int bool;

#define TRUE 1
#define FALSE 0

int revnum(int ino)
{
    int idigit=0;
    int irev=0;

    while(ino !=0)
    {
        idigit=ino%10;
        irev=(irev*10)+idigit;
        ino = ino/10;
    }
    return irev;
}

bool chkpalindrome(int ino1)
{
    int iret1=0;
    int ibackup=ino1;

    iret1=revnum(ino1);
    printf("backup no is:%d\n",ibackup);
    printf("reverse no is:%d\n",iret1);

    if(ibackup==iret1)
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
    int ivalue=0;
    bool bret=FALSE;

    printf("Enter number:");
    scanf("%d",&ivalue);

    bret=chkpalindrome(ivalue);

    if(bret==TRUE)
    {
        printf("number is palindrome\n");
    }
    else
    {
        printf("number is not palindrome\n");
    }
    return 0;
}