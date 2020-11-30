#include<stdio.h>
#include<stdlib.h>

int MultiOdd(int *arr,int ivalue)
{
	int iMult=1;
	
	for(int j=0;j<ivalue;j++)
	{
		if((arr[j]%2)!=0)
		{
			iMult=iMult * arr[j];
		}
	}
	
	return iMult;
}

int main()
{
	int ino1=0,ino2=0,ino3=0;
	int *ptr=NULL;
	
	printf("Enter number of values :\n");
	scanf("%d",&ino1);
	
	ptr=(int *)malloc(sizeof(int) *ino1);
	
	printf("Enter values of array :\n");
	for(int i=0;i<ino1;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	int iret=MultiOdd(ptr,ino1);
	
	printf("Multiplication of odd number is %d",iret);
	
	free(ptr);
	return 0;
}
