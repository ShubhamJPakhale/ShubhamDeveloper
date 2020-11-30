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
	int fd=0,size=0,i=0;
	struct student sobj;
	
	fd=open(arr, O_RDWR | O_CREAT);
	if(fd==-1)
	{
		printf("Unable to open file\n");
	}
	
	printf("Enter student size in file:\n");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("Enter roll no:\n");
		scanf("%d",&sobj.RollNo);
		
		printf("Enter student name:\n");
		scanf("%s",&sobj.Name);
		
		printf("Enter student Marks:\n");
		scanf("%d",&sobj.Marks);
		
		printf("Enter Mobile number :\n");
		scanf("%d",&sobj.Mobile);
		
		printf("\n");
		
		write(fd,&sobj,sizeof(sobj));
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