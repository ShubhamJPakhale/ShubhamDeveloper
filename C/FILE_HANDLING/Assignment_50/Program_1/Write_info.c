/*
Write a program which accept information of students from user and write that information into the file. 
*/

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

struct student
{
	int Roll_no;
	char Name[100];
	int Marks;
};

void FileWrite(char *name)
{
	int fd = 0, ret = 0, size = 0, i = 0;
	
	struct student sobj;
	
	fd = open(name , O_WRONLY | O_CREAT, 0777);
	if(fd == -1)
	{
		printf("Unable to open file \n");
		return;
	}
	
	printf("\nEnter number students : \t");
	scanf("%d",&size);
	
	for(i = 1; i <= size; i++)
	{
		printf("\nEnter Roll number : \t");
		scanf("%d",&sobj.Roll_no);
		
		printf("\nEnter the Name of student : \t");
		scanf("%s",sobj.Name);
		
		printf("\nEnter the Marks of student : \t");
		scanf("%d",&sobj.Marks);
		
		write(fd,&sobj,sizeof(sobj));
	}
	
	close(fd);
}

int main()
{
	char name[20] = {'\0'};
	
	printf("Enter file name : \n");
	scanf("%s",name);
	
	FileWrite(name);
	
	return 0;
}