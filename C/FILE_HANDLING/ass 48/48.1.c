#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
	int fd=0;
	char name[20]={'\0'};
	
	printf("Enter name of file that you want to cerate:\n");
	scanf("%s",name);
	
	fd=open(name,O_RDONLY);       //First.txt file
	if(fd== -1)
	{
		printf("Unable to cerate file\n");
	}
	else
	{
		printf("File created successfully with file descriptor %d",fd);
	}
	
	close(fd);
	
	return 0;
}