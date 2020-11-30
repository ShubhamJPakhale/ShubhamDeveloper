#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

struct student
{
	int RollNo;
	char Name[20];
	int Marks;
};

void FileRead(char *name)
{
  int fd=0,ret=0,size=0,i=0;
  struct student sobj;
  
  fd=open(name,O_RDONLY);
  if(fd== -1)
  {
	  printf("Unable to write file\n");
	  return -1;
  }									
  
  printf("data from file is :\n");
  
  while(ret=(read(fd,&sobj,sizeof(sobj)) !=0))
  {		
	  printf("enter Roll no :%d\n",sobj.RollNo);
	  printf("Enter name of student :%s\n",sobj.Name);
	  printf("Enter marks:%d\n",sobj.Marks);
  }
  
  close(fd);
}

int main()
{
    char name1[20];
    
    printf("Enter source file name\n");
    scanf("%s",name1);
    
   
    FileRead(name1);
    return 0;
}