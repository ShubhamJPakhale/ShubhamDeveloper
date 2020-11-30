/*
Write a program which read all the information of students from the file.    
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

void FileRead(char *name)
{
    int fd = 0, ret = 0;
	
	struct student sobj;
	
    fd = open(name,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return;
    }
    
	printf("\nData from file is  : \n");
	
	while((ret = read(fd,&sobj,sizeof(sobj)))!=0)
	{
		printf("\nRoll number is: %d\n",sobj.Rollno);
		
		printf("\nName of students : %s\n",sobj.Name);
		
		printf("\nMarks : %d\n",sobj.Marks);
	}
	
    close(fd);
}

int main()
{
	char name[20] = {'\0'};
	
	printf("Enter file name\n");
	scanf("%s",name);
	
	FileRead(name);
	
	return 0;
}