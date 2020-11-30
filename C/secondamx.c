#include<stdio.h>
#include<stdlib.h>

int SecodMax(int *arr,int ivalue)
{
	int iMax=0,ino1=0;
	
	for(int j=0;j<ivalue;j++)
	{
		iMax=arr[0];
		if(iMax<arr[j])
		{
			iMax=ino1;
		}
	}
	return iMax;
}
int main()
{
	int ino=0;
	int *ptr=NULL;
	
	printf("Enter number of values in array");
	scanf("%d",&ino);
	
	ptr=(int *)malloc(sizeof(int) * ino);
	
	if(ino<0)
	{
		printf("error: Invalid number");
	}
	
	printf("enter number of array :\n");
	for(int i=0;i<ino;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	int iret= SecodMax(ptr,ino);
	
	printf("Second maximum no in array is %d",iret);
	
	free(ptr);
	
	return 0;
}