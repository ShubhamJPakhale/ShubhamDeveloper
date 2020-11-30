#include<stdio.h>
#include<stdlib.h>

int Check(int *arr,int ivalue,int ival)
{
	int icount=0,i=0;
	
	for(int j=0;j<ivalue;j++)
	{
		if(arr[j]==ival)
		{
			i=j;
			break;
		}
	}
	return i;
}

int main()
{
	int ino1=0,ino2=0;
	int *ptr=NULL;
	
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
	
	int iret=Check(ptr,ino1,ino2);
	
	printf("first entry of %d in array is %d",ino2,iret);
	
	free(ptr);
	return 0;
}
