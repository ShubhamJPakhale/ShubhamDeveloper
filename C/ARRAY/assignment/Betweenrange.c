#include<stdio.h>
#include<stdlib.h>

void NoBetween(int *arr,int ivalue,int ival1,int ival2)
{
	for(int j=0;j<ivalue;j++)
	{
		if(arr[j]>=ival1 && arr[j]<=ival2)
		{
			printf("%d\t",arr[j]);
		}
	}
}

int main()
{
	int ino1=0,ino2=0,ino3=0;
	int *ptr=NULL;
	
	printf("Enter number of values :\n");
	scanf("%d",&ino1);
	
	ptr=(int *)malloc(sizeof(int) *ino1);
	
	printf("start point for range in array :\n");
	scanf("%d",&ino2);
	
	printf("end point for range in array :\n");
	scanf("%d",&ino3);
	
	printf("Enter values of array :\n");
	for(int i=0;i<ino1;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	printf("\nNumber between %d to %d range are :\n",ino2,ino3);
	
	NoBetween(ptr,ino1,ino2,ino3);
	
	free(ptr);
	return 0;
}
