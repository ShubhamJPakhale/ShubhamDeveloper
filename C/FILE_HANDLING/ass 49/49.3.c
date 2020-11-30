#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int CountCapital(char *arr)
{
	int ret=0,fd=0,i=0,icnt=0;
	char brr[50];
	
	fd=open(arr,O_RDONLY);
	if(fd==-1)
	{
		printf("Unable to open file");
	}
	
	while((ret=read(fd,brr,sizeof(brr))) !=0)
	{
		for(i=0;i<ret;i++)
		{
			if(brr[i]==' ')
			{
				icnt++;
			}
		}
	}
	
	return icnt;
	close(fd);
}

int main()
{
	char arr[20]={'\0'};
	int ret=0;
	
	printf("Enter file name :\n");
	scanf("%s",&arr);
	
	ret=CountCapital(arr);
	printf("No of White spaces in %s text file is %d",arr,ret);
	
	return 0;
}