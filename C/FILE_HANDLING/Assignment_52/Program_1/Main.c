/*
Write a program which accept file name which contains information of student and display the information of student having highest marks. 
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
	int fd = 0, iRet = 0 , iMax = 0 , iCnt = 0;
	
	struct student sobj;
	
	fd = open(name , O_RDONLY);
	if(fd == -1)
	{
		printf("Unable to open file \n");
		return;
	}
	
	printf("\n  Data from file is   \n");
	
	while((iRet = read(fd,&sobj,sizeof(sobj)))!= 0)
	{
			if(sobj.Marks > iMax)
			{
				iMax=sobj.Marks;
			}
	}
	printf("Highest mark is : %d\n",iMax);
	
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