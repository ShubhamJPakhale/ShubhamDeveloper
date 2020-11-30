/*
 Write a program which accept file name which contains information of student and display names of all students whose length of the name is 6. 
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
			if((sobj.Marks >= 60)&&(sobj.Marks <= 100))
			{
				printf("\n FIRST CLASS \n");
				
				printf("Roll number of student is : %d\n",sobj.Rollno);
				
				printf("Name of student is : %s\n",sobj.Name);
				
				printf("Marks of student is : %d\n",sobj.Marks);
			}
			
			else if((sobj.Marks >= 50)&&(sobj.Marks <= 60))
			{
				printf("\n SECOND CLASS \n");
				
				printf("Roll number of student is : %d\n",sobj.Rollno);
				
				printf("Name of student is : %s\n",sobj.Name);
				
				printf("Marks of student is : %d\n",sobj.Marks);
			}
			
			else
			{
				printf("\n PASS CLASS \n");
				
				printf("Roll number of student is : %d\n",sobj.Rollno);
				
				printf("Name of student is : %s\n",sobj.Name);
				
				printf("Marks of student is : %d\n",sobj.Marks);
			}
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