//this file open file when file is already available..
//this create file when file is not available so we this program opens file and create file

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
		
	//0777 is optional so it is best programming practice to write third parameter 
	
	fd=open(name,O_RDWR | O_CREAT,0777);       //0777 for read,write,open   
	//fd=creat(name,0777);    //file gets opened with read and write mode
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