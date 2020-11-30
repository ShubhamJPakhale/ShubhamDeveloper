/*
Write a program which accept file name which contains information of student and marks. Display all students having that marks.   
*/

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

struct student
{
	int Rollno;
	char Name[20];
	int Marks;
};

void Marks(char *name)
{
	int iRet = 0 , fd = 0;
	
	struct student sobj;
	
	fd= open(name,O_RDONLY);
	if(fd == -1)
	{
		printf("Unable to open file");
		return;
	}
	
	printf("\n Data from file \n");
	
	while((iRet = read(fd,&sobj,sizeof(sobj)))!=0)
	{

		printf("Name of students  : %s \t Marks obtained : %d \n",sobj.Name,sobj.Marks);
	}
	
	close(fd);
}

int main()
{
	char name[20]= {'\0'};
	
	printf("Enter the name of file\n");
	scanf("%s",name);
	
	Marks(name);
	
	return 0;
}