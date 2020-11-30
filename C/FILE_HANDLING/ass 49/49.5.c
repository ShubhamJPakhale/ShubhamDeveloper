#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

void CountCharacter(char arr[],int size)
{
	int ret=0,fd=0,i=0,icnt=0;
	char *brr=NULL;
	
	brr=(char *)malloc(size);
	
	fd=open(arr,O_RDONLY);
	if(fd==-1)
	{
		printf("Unable to open file");
	}
	
	lseek(fd,0,SEEK_SET);
	
	ret=read(fd,brr,size);
	
	printf("data from file is :\n");
	write(1,brr,ret);
	
	printf("\n");
	
	close(fd);
}

int main()
{
	char arr[20]={'\0'};
	int size=0;
	
	printf("Enter file name :\n");
	scanf("%s",&arr);
	
	printf("Enter digit for writing first n alphabets in file :\n");
	scanf(" %d",&size);
	
	CountCharacter(arr,size);
	
	return 0;
}