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
	int ret=0,length=0;
	
	
	printf("Enter file name\n");
	scanf("%s",name);
	
	//0777 is optional so it is best programming practice to write third parameter 
	
	fd=open(name,O_RDWR | O_CREAT,0777);       //0777 for read,write,open   
	if(fd == -1)
	{
		printf("Unable to open the file\n");
	}
	else
	{
		printf("File successfully created with %d\n",fd);
	}
	
	printf("enter data we want to write in file\n");
	scanf(" %[^'\n']s",arr);
	
	length=strlen(arr);
	
	ret=write(fd,arr,length);
	if(ret ==-1)
	{
		printf("Unable to open the file\n");
	}
	else				
	{		
		printf("Data successfully written in the file\n");
	}		

	close(fd);	
	return 0;
}