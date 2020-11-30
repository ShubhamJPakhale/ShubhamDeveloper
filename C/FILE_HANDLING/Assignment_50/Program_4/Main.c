/*
Write a program which accept file name which contains information of student and display only marks of students 
*/

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<io.h>
#include<unistd.h>

struct student
{
	int Rollno;
	char Name[20];
	int Marks;
};


void DisplayMarks(char *name)
{
	int fd = 0; int iRet =0;
	
	struct student sobj;
	
	fd = open(name,O_RDONLY);
	if(fd == -1)
	{
		printf("Unable to open");
		return;
	}
	
	printf("\nData from file\n");
	
	while((iRet = read(fd,&sobj,sizeof(sobj)))!= 0)
	{
		printf("Marks of student is : %d\n",sobj.Marks);
	}
	
	close(fd);
}

int main()
{
	char name[20] = {'\0'};
	
	printf("Enter the name of file\n");
	scanf("%s",name);
	
	DisplayMarks(name);
	
	return 0;
}