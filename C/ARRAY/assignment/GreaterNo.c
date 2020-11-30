#include<stdio.h>
#include<stdlib.h>

int largestNo(int *arr,int ivalue)
{
	int iMax=0;
	
	iMax=arr[0];
	
	for(int j=0;j<ivalue;j++)
	{
		if(arr[j]>iMax)
		{
			iMax=arr[j];
		}
	}
	return iMax;
}

int main()
{
	int ino1=0,ino2=0;
	int *ptr=NULL;
	
	printf("Enter number of values :\n");
	scanf("%d",&ino1);
	
	ptr=(int *)malloc(sizeof(int) *ino1);
	
	printf("Enter values of array :\n");
	for(int i=0;i<ino1;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	int iret=largestNo(ptr,ino1);
	
	printf("largest number in array is %d",iret);
	
	free(ptr);
	return 0;
}
