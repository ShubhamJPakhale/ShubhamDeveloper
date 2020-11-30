/*
Write a program which accept file name which contains information of student and display the information of student having lowest marks.    
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
    int fd = 0, ret = 0, iMin = 0;
	
	struct student sobj;
	
    fd = open(name,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return;
    }
    
	printf("\n  Data from file is  : \n");
	
	while((ret = read(fd,&sobj,sizeof(sobj)))!=0)
	{
		if(sobj.Marks < iMin)
		{
			iMin = sobj.Marks;
		}
	}
	printf("\nLowest Marks : %d\n",iMin);
	
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