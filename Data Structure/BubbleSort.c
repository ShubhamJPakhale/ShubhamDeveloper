#include<stdio.h>
#include<stdlib.h>

void BubbleSort(int *arr,int no)
{
	for(int i=0;i<no;i++)
	{
		for(int j=0;j<no-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

int main()
{
	int no=0;
	int *arr=NULL;

	printf("Enter number of elements in array are :");
	scanf("%d",&no);

	arr=(int*)malloc(no * sizeof(int));

	printf("Enter elements of array :\n");
	for(int i=0;i<no;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("Entered elements of array are:\n");
	for(int j=0;j<no;j++)
	{
		printf("%d\t",arr[j]);
	}

	printf("\nArray after BubbleSort is :\n");
	BubbleSort(arr,no);

	for(int k=0;k<no;k++)
	{
		printf("%d\t",arr[k]);
	}
	
	return 0;
}