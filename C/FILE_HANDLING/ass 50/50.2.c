#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
#include<unistd.h>

struct student
{
	int RollNo;
	char Name[20];
	int Marks;
	int Mobile;
};	

void StudentInfoWrite(char *arr)
{
	int fd=0,size=0,ret=0;
	
	fd=open(arr, O_RDONLY);
	if(fd==-1)
	{
		printf("Unable to open file\n");
	}
	
	char brr[300]={'\0'};
	
	while((ret=read(fd,brr,sizeof(brr)))!=0)
	{
		char *token;
		
		token=strtok(brr,",");
		
		while(token !=NULL)
		{
			printf("%s\t",token);
			token=strtok(NULL,",");
		}
		
		printf("\n");
	}
	
	close(fd);
}

int main()
{
	char arr[20]={'\0'};
	
	printf("Enter file name :\n");
	scanf("%s",&arr);
	
	StudentInfoWrite(arr);
	
	return 0;
}