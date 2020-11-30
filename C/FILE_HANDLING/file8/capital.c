#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int FileCapital(char *name)
{
    int fd=0,ret=0,icnt=0,i=0;
	char Mug[100];
	
	fd=open(name,O_RDONLY);
	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;
	}
	
	while((ret=read(fd,Mug,sizeof(Mug)) )!=0)
	{
		for(int i=0;i<ret;i++)
		{
			if((Mug[i] >='a') && (Mug[i] <='z'))   //if((Mug[i] >='A') && (Mug[i] <='Z'))
			{
				icnt++;
			}
		}
	}
	
	close(fd);
	return icnt;
}

int main()
{
    char name[20];
    int ret=0;
	
    printf("Enter source file name\n");
    scanf("%s",name);
    
    ret=FileCapital(name);
	
	printf("Capital letters in file are :%d",ret);
    
    return 0;
}