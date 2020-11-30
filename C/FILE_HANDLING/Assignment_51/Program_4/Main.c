/*
 Write a program which accept file name which contains information of student and display names of all students whose length of the name is 6. 
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


void DisplayMarks(char *name)
{
	int fd = 0; int iRet =0 ;int i =0;
	char Buffer[1024];
	
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

		while(*sobj.Name!=EOF)
		{
			if(*sobj.Name == 6)
			{
				printf("Marks of student is : %s\n",sobj.Name);
			}
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