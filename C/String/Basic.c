#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

void Display(char str[],int no)
{
	int size=strlen(str);

	for(int i=0;i<size;i++)
	{
		if(i==(no-1))
		{
			i++;
		}

		printf("%c\t",str[i]);
	}
}

int main()
{
	char str[100];
	int no=0;

	printf("Enter string alphabetes : \n");
	scanf("%[^'\n']s",&str);

	printf("Enter Number for printing all elements except that word :");
	scanf("%d",&no);

	Display(str,no);

	return 0;
}