#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
	int fd=0,ret=0;
	char name[20]={'\0'};
	char arr[100]={'\0'};
	
	printf("Enter name of file that you want to cerate:\n");
	scanf("%s",name);
	
	fd=open(name,O_CREAT);     //Second.txt
	if(fd== -1)
	{
		printf("Unable to cerate file\n");
	}
	else
	{
		printf("File created successfully with file descriptor %d\n",fd);
	}
	
	ret=read(fd,arr,100);
	if(ret== -1)
	{
		printf("No data in file\n");
	}
	else
	{
		printf("Data successfully read from file\n");
	}
	
	printf("Data in file is: %s\n",arr);
	
	close(fd);
	
	return 0;
}