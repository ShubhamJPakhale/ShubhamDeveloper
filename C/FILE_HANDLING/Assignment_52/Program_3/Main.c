/*
 Write a program which accept file name which contains information of student and display all names of students having marks greater than 90. 
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

void DisplayName(char *name)
{
	int iRet = 0, fd = 0;
	
	struct student sobj;
	
	fd = open(name,O_RDONLY);
	if(fd == -1)
	{
		printf("Unable to open file \n");
		return;
	}
	
	printf("\nData from file is \n");
	
	while((iRet = read(fd,&sobj,sizeof(sobj)))!= 0)
	{
		if(sobj.Marks > 90)
		{
			printf("\nName of the Student : %s\n",sobj.Name);
		}
	}
	close(fd);
}

int main()
{
	char name[20] = {'\0'};
	
	printf("Enter the name of file : \n");
	scanf("%s",name);
	
	DisplayName(name);
	
	return 0;
}