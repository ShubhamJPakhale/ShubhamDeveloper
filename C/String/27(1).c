#include<stdio.h>
#include<string.h>

int CountCapital(char str[])
{
	int i=0,iCapital=0,iSmall=0,iDiffer=0;
	while(str[i] !='\0')
	{
		if((str[i]>='a' )&&(str[i]<='z'))     //if((str[i]>='A' )&&(str[i]<='Z'))
		{
			iSmall++;
		}
		else
		{
			iCapital++;
		}
		iDiffer = iSmall - iCapital;
		i++;
	}
	return iDiffer;		
}

int main()
{
	char ch[20];
	
	printf("Enter string :\n");
	scanf("%[^’\n’]s",&ch);
	
	int iret=CountCapital(ch);
	
	//printf("number of small letter  in string is %d",iret);
	
	printf("number of small and capital letter difference in string is %d",iret);

	return 0;
	
}
