// Application which accepts file from user and display which file on screen

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

//function used to open and read whole data of the file.
void DisplayWhloeFile(char FName[])
{
	int fd=0;
	char arr[100]={'\0'};
	int ret=0;
	
	fd=open(FName,O_RDONLY);
	if(fd == -1)
	{
		printf("Unable to open file\n");
		return;
	}
	
	printf("Data from file is :\n");
	while((ret=read(fd,arr,100)) !=0)
	{
		write(1,arr,ret);
	}
	
	close(fd);
}

int main()
{
	char name[20]={'\0'};
	
	printf("Enter file Name :\n");
	scanf("%s",name);
	
	DisplayWhloeFile(name);
	
	return 0;
}