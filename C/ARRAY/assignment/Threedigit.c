#include<stdio.h>
#include<stdlib.h>

void ThreeDigit(int *arr,int ivalue)
{
	for(int j=0;j<ivalue;j++)
	{
		int iram=arr[j];
		int iCount=0,iDigit=0;
		
		while(arr[j]!=0)
		{
		    iDigit=arr[j]%10;
			arr[j]=arr[j]/10;
			iCount++;
		}
		if(iCount==3)
		{
			printf("%d\t",iram);
		}
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
