#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int SizeOfFile(char *arr[])
{
	int ret=0,fd=0;
	
	fd=open(arr,O_RDONLY);
	if(fd==-1)
	{
		printf("Unable to open file");
	}
	
	ret=lseek(fd,0,SEEK_END);
	
	close(fd);
	return ret;
}

int main()
{
	char arr[20]={'\0'};
	int ret=0;
	
	printf("Enter file name :\n");
	scanf("%s",&arr);
	
	ret=SizeOfFile(arr);
	printf("Size of file %s is %d bytes",arr,ret);
	
	return 0;
}