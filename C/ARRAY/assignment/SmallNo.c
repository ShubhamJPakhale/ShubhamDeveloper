#include<stdio.h>
#include<stdlib.h>

int SmallNo(int *arr,int ivalue)
{
	int iMin=0;
	
	iMin=arr[0];
	
	for(int j=0;j<ivalue;j++)
	{
		if(iMin>arr[j])
		{
			iMin=arr[j];
		}
	}
	return iMin;
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
	
	int iret=SmallNo(ptr,ino1);
	
	printf("smallest number in array is %d",iret);
	
	free(ptr);
	return 0;
}
