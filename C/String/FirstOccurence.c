#include<stdio.h>

int FirstOccurence(char *str,char ch2)
{
	int i=0,icnt= -1;
	
	if(str==NULL)
	{
		return -1;
	}
	
	/*while(str[i] !='\0')       //first occurence
	{
		if(str[i]==ch2)
	    {
	    	icnt=i;
			break;
     	}
		i++;
	}
	*/
	while(str[i] !='\0')  // last occurence 
	{
		if(str[i]==ch2)
	    {
	    	icnt=i;
     	}
		i++;
	}
	return icnt;
}

int main()
{
	char ch[30];
	char ch1='\0';
	
	printf("enter character:\n");
	scanf("%[^'\n']s",&ch);
	
	printf("Enter character that you eant to serch in string is :");
	scanf(" %c",&ch1);
	
	int iret= FirstOccurence(ch,ch1);
	
	if(iret!= -1)
	{
	   printf("[TRUE] Mumber of %c in string is %d",ch1,iret);
	}
	else
	{
	   printf("[FALSE]  There is NO Mumber %c in string ",ch1);
	}

	
	return 0;
}