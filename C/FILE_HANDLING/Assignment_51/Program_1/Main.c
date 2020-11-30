/*
Write a program which accept file name which contains information of student as well as accept name of student and dsplay only information of that student. 
*/

#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<fcntl.h>
#include<unistd.h>

struct student
{
	int Rollno;
	char Name[20];
	int Marks;
};

void Information(char *name)
{
	int fd = 0, iRet = 0;
	
	struct student sobj;
	
	fd = open(name , O_RDONLY);
	if(fd == -1)
	{
		printf("Unable to open file \n");
		return;
	}
	
	printf("\nData from file is : \n");
	
	while((iRet = read(fd,&sobj,sizeof(sobj)))!= 0)
	{
		printf("\nEnter the Name of student : \n");
		scanf("%s",sobj.Name);
		
		printf("\nRoll number of student is : %d\n",sobj.Rollno);
		
		printf("\nMarks of student is : %d\n",sobj.Marks);
		
	}
	
	close(fd);
}

int main()
{
	char name[20] = {'\0'};
	
	printf("Enter file name : \n");
	scanf("%s",name);
	
	Information(name);
	
	return 0;
}