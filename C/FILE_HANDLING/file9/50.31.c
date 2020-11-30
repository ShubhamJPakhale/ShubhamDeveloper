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
	char Gender;
};	

void average(char *name)
{
	int fd=0,ret=0,size=0,i=0,sum=0,icnt=0;
	float average=0;
  struct student sobj;
  
  fd=open(name,O_RDONLY);
  if(fd== -1)
  {
	  printf("Unable to write file\n");
	  return -1;
  }
  
  while(ret=(read(fd,&sobj,sizeof(sobj)) !=0))
  {
	 sum=sobj.Marks + sum;
	 icnt++;
  }
  
  average=sum/icnt;
  printf("%f",average);
  
  close(fd);
}

int main()
{
    char name1[20];
    
    printf("Enter source file name\n");
    scanf("%s",name1);
    
	average(name1);
	
    return 0;
}