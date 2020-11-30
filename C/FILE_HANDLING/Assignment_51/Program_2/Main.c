/*
 Write a program which accept file name which contains information of student and display all names of students whose name starts with the letter P    
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
    int fd = 0, ret = 0;
	
	struct student sobj;
	
    fd = open(name,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return;
    }
    
	printf("\nData of whose name starts from P  : \n");
	
	while((ret = read(fd,&sobj,sizeof(sobj)))!=0)
	{
		if(*sobj.Name == 'P')
		{
			printf("\nName of students : %s\n",sobj.Name);
		}
	}
	
    close(fd);
}

int main()
{
	char name[20] = {'\0'};
	
	printf("Enter file name\n");
	scanf("%s",name);
	
	DisplayName(name);
	
	return 0;
}