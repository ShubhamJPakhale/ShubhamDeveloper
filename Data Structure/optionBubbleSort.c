#include<stdio.h>
#include<stdlib.h>

void ConditionalBubbleSort(int *arr,int size,int option)
{
	if(option ==1)
	{
		for(int i=0;i<size;i++)
		{
			for(int j=0;j<size-i-1;j++)
			{
				if(arr[j]>arr[j+1])
				{
					temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
			}
		}
	}
	else if(option ==2)
	{
		for(int i=0;i<size;i++)
		{
			for(int j=0;j<size-i-1;j++)
			{
				if(arr[j]<arr[j+1])
				{
					temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
			}
		}
	}
	else
	{
		printf("Wrong choice!!  Enter qrite choice between 1 &2 in this application of bubble sorting \n");
	}
}

int main()
{
	int size=0;
	int *ptr=NULL;
	int option=0;

	printf("enter size of array :\n");
	scanf("%d",&size);

	ptr=(int *)malloc(sizeof(int) * size);

	printf("enter elements of array :\n");
	for(int i=;i<size;i++)
	{
		scanf("%d",&ptr[i]);
	}

	printf("enter option number for operation :\n");
	scanf("%d"&option);

	ConditionalBubbleSort(ptr,size,option);

	printf("array after operation sorting is :\n");
	for(int k=0;k<size;k++)
	{
		printf("%d\t",ptr[k]);
	}

	return 0;
}