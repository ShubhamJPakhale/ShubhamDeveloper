#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int bool;

bool Check(int *arr,int ivalue,int ival)
{
	int icount=0;
	
	for(int j=0;j<ivalue;j++)
	{
		if(arr[j]==ival)
		{
			icount++;
		}
	}
	if(icount>=1)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	int ino1=0,ino2=0;
	int *ptr=NULL;
	bool bret=FALSE;
	
	printf("Enter number of values :\n");
	scanf("%d",&ino1);
	
	ptr=(int *)malloc(sizeof(int) *ino1);
	
	printf("values for searching in array :\n");
	scanf("%d",&ino2);
	
	printf("Enter values of array :\n");
	for(int i=0;i<ino1;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	bret=Check(ptr,ino1,ino2);
	
	if(bret==TRUE)
	{
		printf("\n%d is present in array",ino2);
	}
	else
	{
		printf("\n%d is not present in array",ino2);
	}
	
	return 0;
}
