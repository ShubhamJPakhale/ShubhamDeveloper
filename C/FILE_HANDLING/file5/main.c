//this program write in file 

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
	char name[20]={'\0'};
	char arr[50]={'\0'};
	int fd=0;       //file descriptor
	int ret=0;
	
	
	printf("Enter file name\n");
	scanf("%s",&name);
	
	fd=open(name,O_RDWR);         
	if(fd == -1)
	{
		printf("Unable to open the file\n");
	}
	else
	{
		printf("File successfully created with %d\n",fd);
	}
	
	ret=read(fd,arr,50);           //it read data from file
	if(ret == -1)
	{
		printf("Unable to read from the file\n");
	}
	else
	{
		printf("Data successfully read\n");
	}
	
	printf("Data from file is : %s",arr);
	
	close(fd);	
	return 0;
}