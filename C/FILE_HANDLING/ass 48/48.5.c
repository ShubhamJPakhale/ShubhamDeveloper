#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

void InsertLast(char *arr,char *brr)
{
	int ret=0,fd=0,length=0;
	
	fd=open(arr,O_RDWR);
	if(fd==-1)
	{
		printf("Unable to open file");
	}
	
	ret=lseek(fd,0,SEEK_END);
	
	length=strlen(brr);
	
	write(fd,brr,length);
	
	close(fd);
}

int main()
{
	char arr[20]={'\0'};
	char brr[20]={'\0'};
	
	printf("Enter file name :\n");
	scanf("%s",&arr);
	
	printf("Enter string for inserting at last:\n");
	scanf(" %[^'\n']s",&brr);
	
	InsertLast(arr,brr);
	
	return 0;
}