#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

void FileRead(char *name,int position1,int size)
{
    int fd=0,ret=0;
	char* Mug=NULL;
	
	Mug=(char *)malloc(size);
	
	fd=open(name,O_RDONLY);
	if(fd ==-1)
	{
		printf("Unable to open file\n");
	}
	else
	{
		printf("File open file successfully\n");
	}
	
	ret=lseek(fd,position1,SEEK_SET);
	
	ret=read(fd,Mug,size);
	printf("data from file is :\n");
	
	write(1,Mug,ret);
	
	printf("\n");
	
	close(fd);
}

int main()
{
    char name1[20];
    int value1=0,value2=0;
    
    printf("Enter source file name\n");
    scanf("%s",name1);
    
    printf("Enter position in file\n");
    scanf("%d",&value1);
    
	printf("Enter size in file\n");
    scanf("%d",&value2);
    
    FileRead(name1,value1,value2);
    
    return 0;
}