#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

void Display(char **str,int k,int j)
{
	printf("string elements are : \n");

	for(int i=0;i<k;i++)
	{
		printf("%s",(char*)str[i][100]);
		printf("\n");
	}
}

int main()
{
	int no=0,no1=0;
	
	printf("Enter Number for printing all elements except that word :");
	scanf("%d",&no);

	char str[no][20];

	printf("Enter string elements : \n");
	for(int i=0;i<no;i++)
	{
		scanf(" %[^'\n']s",&str[i]);
	}

	/*
	printf("string elements : \n");
	for(int i=0;i<no;i++)
	{
		printf("%s\n",str[i]);
	}
	*/
	
	//printf("Enter Number for printing all elements except that word :");
	//scanf("%d",&no1);

	Display((char**)str,no,20);

	return 0;
}