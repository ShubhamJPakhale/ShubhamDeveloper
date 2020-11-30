#include<stdio.h>
#include<stdlib.h>

int DifferNo(int *arr,int ivalue)
{
	int iMax=0,iMin=0;
	int iDiffer=0;
	
	iMax=arr[0];
	iMin=arr[0];
	
	for(int j=0;j<ivalue;j++)
	{
		if(arr[j]>iMax)
		{
			iMax=arr[j];
		}
		else if( arr[j]<iMin)
		{
			iMin=arr[j];
		}
	}
	iDiffer=iMax-iMin;
	
	return iDiffer;
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
	
	int iret=DifferNo(ptr,ino1);
	
	printf("difference between largest and smallest number in array is %d",iret);
	
	free(ptr);
	return 0;
}
