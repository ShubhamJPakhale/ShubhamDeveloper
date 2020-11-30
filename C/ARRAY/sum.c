#include<stdio.h>
#include<stdlib.h>

int SumofNumber(int arr[],int iSize)
{
	int isum=0;
	int j=0;
	
	for(j=0;j<iSize;j++)
	{
		isum=isum +arr[j];
	}
	
	return isum;
}
	
int main()
{
	int ivalue=0;
	int *ptr=0;
	
	printf("Enter number of values :");
	scanf("%d",&ivalue);
	
	ptr=(int *)malloc(ivalue* sizeof(int));
	
	printf("Enter values of array :");
	for(int i=0;i<ivalue;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	printf("Entered numbers of array are\n");
	for(int i=0;i<ivalue;i++)
	{
		printf("%d\t",ptr[i]);
	}
	
    int iret=SumofNumber(ptr,ivalue);
	
	printf("\nSum of array member is %d",iret);
	
	return 0;
}
