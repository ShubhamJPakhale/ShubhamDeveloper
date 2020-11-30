#include<stdio.h>
#include<stdlib.h>

void ThreeDigit(int *arr,int ivalue)
{
	for(int j=0;j<ivalue;j++)
	{
		int iram=arr[j];
		int iCount=0,iDigit=0;
		
		for(int i=arr[j];i>=0;i--)
		{
			iDigit=arr[j]%10;
		    iCount=iCount + iDigit;
		    arr[j]=arr[j]/10;
		}
		printf("%d -> %d\n",iram,iCount);
	}
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
	
	printf("Three digit number in array is \n");
	
	ThreeDigit(ptr,ino1);
	
	free(ptr);
	return 0;
}
