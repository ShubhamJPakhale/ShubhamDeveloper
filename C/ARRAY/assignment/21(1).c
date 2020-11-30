#include<stdio.h>
#include<stdlib.h>

int DifferenceOfSum(int arr[],int ivalue)
{
	int sum1=0,sum2=0,idiffer=0;
	
	for(int k=0;k<ivalue;k++)
	{
		if((arr[k]%2)==0)
		{
			sum1=sum1 +arr[k];
		}
		else
		{
			sum2=sum2+arr[k];
		}
	}
	
	idiffer=sum1-sum2;
	
	return idiffer;
	
}

int main()
{
	int ino=0;
	int *ptr=NULL;
	
	printf("Enter number of values :");
	scanf("%d",&ino);
	
	ptr=(int *) malloc (ino * sizeof(int));
	
	if(ptr ==NULL)
	{
		printf("Error : Unable to allocate memory\n");
		return -1;
	}
	
	printf("enter number of array :\n");
	for(int i=0;i<ino;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	int iret= DifferenceOfSum(ptr,ino);
	
	printf("Difference of even and odd number summation is %d",iret);
	
	free(ptr);
	
	return 0;
}