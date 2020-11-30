#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	char name[20]={'\0'};
	int fd=0;       //file descriptor
	
	printf("Enter file name\n");
	scanf("%s",name);
	
	fd=creat(name,0777);    //file gets opened with read and write mode
	if(fd == -1)
	{
		printf("Unable to open the file\n");
	}
	else
	{
		printf("File successfully created with %d\n",fd);
	}
	
	close(fd);	
	return 0;
}