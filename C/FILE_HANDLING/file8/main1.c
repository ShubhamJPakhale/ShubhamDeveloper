#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

void FileRead(char *name,int position)
{
    int fd=0,ret=0;
	char Mug[10]={'\0'};
	
	fd=open(name,O_RDONLY);
	if(fd ==-1)
	{
		printf("Unable to open file\n");
	}
	else
	{
		printf("File open file successfully\n");
	}
	
	lseek(fd,position,SEEK_SET);
	
	ret=read(fd,Mug,10);
	printf("data from file is :\n");
	
	write(1,Mug,ret);
	
	printf("\n");
	
	close(fd);
}

int main()
{
    char name1[20];
    int value=0;
    
    printf("Enter source file name\n");
    scanf("%s",name1);
    
    printf("Enter position in file\n");
    scanf("%d",&value);
    
    FileRead(name1,value);
    
    return 0;
}