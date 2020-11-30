#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int CountCharacter(char *arr,char ch)
{
	int ret=0,fd=0,i=0,icnt=0;
	char brr[50];
	
	fd=open(arr,O_RDONLY);
	if(fd==-1)
	{
		printf("Unable to open file");
	}
	
	while((ret=read(fd,brr,sizeof(brr))) !=0)
	{
		for(i=0;i<ret;i++)
		{
			if(brr[i]==ch)
			{
				icnt++;
			}
		}
	}
	
	return icnt;
	close(fd);
}

int main()
{
	char arr[20]={'\0'};
	char brr;
	int ret=0;
	
	printf("Enter file name :\n");
	scanf("%s",&arr);
	
	printf("Enter character for search in file :\n");
	scanf(" %c",&brr);
	
	ret=CountCharacter(arr,brr);
	printf("No of %c character in %s file is %d",brr,arr,ret);
	
	return 0;
}