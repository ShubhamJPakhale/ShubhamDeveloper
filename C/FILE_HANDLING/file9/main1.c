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

void FileWrite(char *name)
{
  int fd=0,ret=0,size=0,i=0;
  struct student sobj;
  
  fd=open(name,O_WRONLY);
  if(fd== -1)
  {
	  printf("Unable to write file\n");
	  return -1;
  }
  
  printf("Enter No of student");
  scanf("%d",&size);
  
  for(i=1;i<=size;i++)
  {
	  printf("enter Roll no\n");
	  scanf("%d",&sobj.RollNo);
	  
	  printf("Enter name of student\n");
	  scanf(" %s",&sobj.Name);
	  
	  printf("Enter marks\n");
	  scanf(" %d",&sobj.Marks);
	  
	  printf("\n");
	  
	  write(fd,&sobj,sizeof(sobj));
  }
  
  close(fd);
}

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
    
    FileWrite(name1);
    FileRead(name1);
    return 0;
}