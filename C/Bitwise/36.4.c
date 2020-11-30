#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

int strlenX(char arr[])
{
	int i=0;
	while(arr[i] !='\0')
	{
		i++;
	}
	return i;
}

BOOL Palindrome(char arr[])
{
	int istart=0,temp=0;
	
	if(arr ==NULL)
	{
		return -1;
	}
	
	int iend=strlenX(arr);
	printf("%d\n",iend);
	
	while(arr[iend] !='\0')
    {
        iend++;
    }
    iend--;
	
	while(istart < iend)
	{	
		temp=arr[istart];
        arr[istart]=arr[iend];
        arr[iend]=temp;
    
		if(arr[istart] != arr[iend])
		{
			break;
		}
		
		istart++;
		iend--;
	}
	
	if(arr[istart] != arr[iend])
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
	char arr[30];
	BOOL bret= FALSE;
	
	printf("enter string :");
	scanf("%s",&arr);
	
	bret=Palindrome(arr);
	
	if(bret==TRUE)
	{
		printf("string is palindrome\n");
	}
	else
	{
		printf("string is not palinderome\n");
	}
	
	return 0;
}
