#include<stdio.h>
#include<string.h>

int strfeequency(char *str)
{
	int icnt=0,icount=0,iDiffer=0,i=0;
	int length=strlen(str);

	/*
	while(str[i] !='\0')
	{
		if((str[i]>='A')&& (str[i]<='Z'))
		{
			icnt++;
		}
		else if((str[i]>='a')&& (str[i]<='z'))
		{
			icount++;
		}
		i++;
	}
	*/

	for(i=0;i<length;i++)
	{
		if((str[i]>='A')&& (str[i]<='Z'))
		{
			icnt++;
		}
		else if((str[i]>='a')&& (str[i]<='z'))
		{
			icount++;
		}
	}

	iDiffer=icnt-icount;

	return iDiffer;
}

int main()
{
	char str[50];
	int iret=0,ilength=0;

	printf("Enter string :\n");
	scanf("%[^'\n']s",&str);

	iret=strfeequency(str);
	printf("Number of Difference in frequency of capital and small letter is %d\n",iret);

	return 0;
}